local ffi = require("ffi")
local error = error
local print = print
local engineHook = engineHook
local engine = engine

local EBlendMode = enum.EBlendMode
local whiteLinearColor = ffi.new("struct FLinearColor", 1, 1, 1, 1)

local engineCanvas = nil -- make sure it's a struct UCanvas*
local currentTexture = nil
local currentLinearColor = whiteLinearColor

local canvas = {}

function canvas._SetPos(x, y)
	engineCanvas.UCanvas.CurX = x
	engineCanvas.UCanvas.CurY = y
end

function canvas.GetDrawColor()
	return engineCanvas.UCanvas.DrawColor
end

function canvas.SetDrawColor(color)
	engineCanvas.UCanvas.DrawColor = color
	currentLinearColor = color:ToLinear()
end

function canvas.GetDrawColorRGBA()
	local color = engineCanvas.UCanvas.DrawColor
	return color.R, color.G, color.B, color.A
end

function canvas.SetDrawColorRGBA(r, g, b, a)
	local color = Color(r, g, b, a)
	canvas.SetDrawColor(color)
end

function canvas.DrawRect(x, y, w, h)
	canvas._SetPos(x, y)

	local tex = engineCanvas.UCanvas.DefaultTexture
	engineCanvas:DrawTile(tex, w, h, 0, 0, tex.UTexture2D.SizeX, tex.UTexture2D.SizeY, currentLinearColor, false, EBlendMode.BLEND_Translucent)
end

function canvas.DrawBorderedRect(x, y, w, h)
	canvas.DrawRect(x, y, 1, h) -- left
	canvas.DrawRect(x + w - 1, y, 1, h) -- right
	canvas.DrawRect(x + 1, y, w - 2, 1) -- top
	canvas.DrawRect(x + 1, y + h - 1, w - 2, 1) -- bottom
end

function canvas.DrawLine(startX, startY, endX, endY)
	engineCanvas:Draw2DLine(startX, startY, endX, endY, engineCanvas.UCanvas.DrawColor)
end

function canvas.LoadFont(fontName)
	local font = engine.FindObject(fontName, engine.Classes.UFont)
	if font == nil then
		error("Font could not be found")
	end

	return ffi.cast("struct UFont*", font)
end

function canvas.GetFont()
	return engineCanvas.UCanvas.Font
end

function canvas.SetFont(font)
	engineCanvas.UCanvas.Font = font
end

function canvas.DrawText(text, x, y)
	canvas._SetPos(x, y)
	engineCanvas:DrawText(text, false, 1, 1)
end

function canvas.GetTextSize(text)
	return engineCanvas:TextSize(text)
end

function canvas.SetTexture(tex)
	--if scale == nil then scale = 1 end
	currentTexture = ffi.cast("struct UTexture2D*", tex)
end

function canvas._InternalDrawTexturedRectUV(x, y, w, h, u, v, ul, vl)
	canvas._SetPos(x, y)
	engineCanvas:DrawTile(currentTexture, w, h, u, v, ul, vl, currentLinearColor, true, EBlendMode.BLEND_Translucent)
end

function canvas.DrawTexturedRect(x, y, w, h)
	if currentTexture == nil then error("Current canvas texture is nil") end
	canvas._InternalDrawTexturedRectUV(x, y, w, h, 0, 0, currentTexture.UTexture2D.SizeX, currentTexture.UTexture2D.SizeY)
end

function canvas.DrawTexturedRectUV(x, y, w, h, u, v, ul, vl)
	if currentTexture == nil then error("Current canvas texture is nil") end
	canvas._InternalDrawTexturedRectUV(x, y, w, h, u, v, ul, vl)
end

function canvas.SetClipRect(x, y, w, h)
	engineCanvas:SetOrigin(x, y)
	engineCanvas:SetClip(x + w, y + h)
end

function canvas.ResetClip()
	engineCanvas:SetOrigin(0, 0)
	engineCanvas:SetClip(engineCanvas.UCanvas.SizeX, engineCanvas.UCanvas.SizeY)
end

-- TODO: Grab this from the object structure rather than a hook - creates a race condition
-- and may actually be incorrect if the UDN is anything to go by.
engineHook.Add("UWillowGameViewportClient", "eventPostRender", "GetCanvas", function(caller, args)
	engineCanvas = ffi.cast("struct UCanvas*", args.Canvas)
	engineHook.Remove("UWillowGameViewportClient", "eventPostRender", "GetCanvas")
end)

return canvas
