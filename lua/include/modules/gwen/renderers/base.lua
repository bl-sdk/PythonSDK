local colors = require("gwen.colors")
local RendererBase = oo.CreateClass("Gwen.Renderer.Base")
local math = math

function RendererBase:Init()
	self.renderOffset = GwenPoint(0, 0)
	self.scale = 1
	self.clipRegion = GwenRect(0, 0, 0, 0)
end

function RendererBase:Begin()
	return
end

function RendererBase:End()
	return
end

oo.NotImplemented(RendererBase, "SetDrawColor", "color")
oo.NotImplemented(RendererBase, "DrawFilledRect", "bounds")

function RendererBase:StartClip()
	return
end

function RendererBase:EndClip()
	return
end

oo.NotImplemented(RendererBase, "LoadTexture", "texName")
-- FreeTexture
oo.NotImplemented(RendererBase, "DrawTexturedRect", "tex", "bounds", "u", "v", "ul", "vl")

function RendererBase:DrawMissingImage(targetRect)
	self:SetDrawColor(colors.Red)
	self:DrawFilledRect(targetRect)
end

function RendererBase:PixelColor(texture, x, y, defaultColor)
	if defaultColor == nil then defaultColor = colors.White end
	return defaultColor
end

oo.NotImplemented(RendererBase, "LoadFont", "fontName")
-- FreeFont
oo.NotImplemented(RendererBase, "RenderText", "font", "pos", "text")
oo.NotImplemented(RendererBase, "MeasureText", "font", "text")

-- Two functions - takes x,y or a rect
function RendererBase:Translate(x, y)
	if y == nil then
		-- x is a rect
		return self:TranslateRect(x)
	else
		return self:TranslateCoords(x, y)
	end
end

function RendererBase:TranslateCoords(x, y)
	x = x + self.renderOffset.x
	y = y + self.renderOffset.y

	x = math.ceil(x * self.scale)
	y = math.ceil(y * self.scale)

	return x, y
end

function RendererBase:TranslateRect(rect)
	rect.x, rect.y = self:TranslateCoords(rect.x, rect.y)
	rect.w = math.ceil(rect.w * self.scale)
	rect.h = math.ceil(rect.h * self.scale)

	return rect
end

function RendererBase:SetRenderOffset(offset)
	self.renderOffset = table.copy(offset)
end

function RendererBase:AddRenderOffset(offset)
	self.renderOffset.x = self.renderOffset.x + offset.x
	self.renderOffset.y = self.renderOffset.y + offset.y
end

function RendererBase:GetRenderOffset()
	return self.renderOffset
end

function RendererBase:SetClipRegion(rect)
	self.clipRegion = table.copy(rect)
end

function RendererBase:AddClipRegion(rect)
	rect = table.copy(rect)

	rect.x = self.renderOffset.x
	rect.y = self.renderOffset.y
	
	local out = table.copy(rect)

	if rect.x < self.clipRegion.x then
		out.w = out.w - self.clipRegion.x - out.x
		out.x = self.clipRegion.x
	end

	if rect.y < self.clipRegion.y then
		out.h = out.h - self.clipRegion.y - out.y
		out.y = self.clipRegion.y
	end

	if rect.x + rect.w > self.clipRegion.x + self.clipRegion.w then
		out.w = self.clipRegion.x + self.clipRegion.w - out.x
	end

	if rect.y + rect.h > self.clipRegion.y + self.clipRegion.h then
		out.h = self.clipRegion.y + self.clipRegion.h - out.y
	end

	self.clipRegion = out
end

function RendererBase:ClipRegionVisible()
	return not (self.clipRegion.w <= 0 or self.clipRegion.h <= 0)
end

function RendererBase:ClipRegion()
	return self.clipRegion
end

function RendererBase:SetScale(scale)
	self.scale = scale
end

function RendererBase:Scale()
	return self.scale
end

return RendererBase
