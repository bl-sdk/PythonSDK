local ffi = require("ffi")

local RendererBase = require("gwen.renderers.base")
local BL2Renderer = oo.InheritClass(RendererBase, "Gwen.Renderer.BL2")

local engine = engine
local canvas = canvas
local whiteColor = Color(255, 255, 255, 255)

-- TODO: This whole renderer ignores scaling

function BL2Renderer:SetDrawColor(color)
	if color == nil then
		canvas.SetDrawColor(whiteColor)
	else
		canvas.SetDrawColor(color)
	end
end

function BL2Renderer:DrawFilledRect(bounds)
	canvas.DrawRect(bounds.x, bounds.y, bounds.w, bounds.h)
end

function BL2Renderer:StartClip()
	canvas.SetClipRect(
		self.clipRegion.x, 
		self.clipRegion.y, 
		self.clipRegion.w,
		self.clipRegion.h
	)
end

function BL2Renderer:EndClip()
	canvas.ResetClip()
end

function BL2Renderer:LoadTexture(texName)
	local tex = engine.FindObject(texName, engine.Classes.UTexture2D)
	if tex == nil then
		error("Texture could not be found")
	end

	return ffi.cast("struct UTexture2D*", tex)
end

function BL2Renderer:DrawTexturedRect(tex, bounds, u, v, ul, vl)
	canvas.SetTexture(tex)
	canvas.DrawTexturedRectUV(bounds.x, bounds.y, bounds.w, bounds.h, u, v, ul, vl)
end

function BL2Renderer:LoadFont(fontName)
	local font = engine.FindObject(fontName, engine.Classes.UFont)
	if font == nil then
		error("Font could not be found")
	end

	return ffi.cast("struct UFont*", font)
end

--[[
oo.NotImplemented(RendererBase, "RenderText", "font", "pos", "text")
oo.NotImplemented(RendererBase, "MeasureText", "font", "text")
]]

return BL2Renderer
