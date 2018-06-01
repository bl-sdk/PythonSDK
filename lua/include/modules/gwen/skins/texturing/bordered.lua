local oo = oo
local BorderedTexture = oo.CreateClass("Gwen.Skin.Texturing.BorderedTexture")

function BorderedTexture:Init(tex, u, v, ul, vl, margin)
	self.tex = tex
	self.u = u
	self.v = v
	self.ul = ul
	self.vl = vl
	self.margin = margin
end

function BorderedTexture:Draw(renderer, bounds, col)
	local l = self.margin.left
	local t = self.margin.top
	local r = self.margin.right
	local b = self.margin.bottom

	local u = self.u
	local v = self.v
	local ul = self.ul
	local vl = self.vl

	local x = bounds.x
	local y = bounds.y
	local w = bounds.w
	local h = bounds.h

	renderer:SetDrawColor(col)

	-- Top
	renderer:DrawTexturedRect(self.tex, GwenRect(x, y, l, t), u, v, l, t) -- left
	renderer:DrawTexturedRect(self.tex, GwenRect(x + l, y, w - l - r, t), u + l, v, ul - l - r, t) -- middle
	renderer:DrawTexturedRect(self.tex, GwenRect(x + w - r, y, r, t), u + ul - r, v, r, t) -- right

	-- Bottom
	renderer:DrawTexturedRect(self.tex, GwenRect(x, y + h - b, l, b), u, v + vl - b, l, b) -- left
	renderer:DrawTexturedRect(self.tex, GwenRect(x + l, y + h - b, w - l - r, b), u + l, v + vl - b, ul - l - r, b) -- middle
	renderer:DrawTexturedRect(self.tex, GwenRect(x + w - r, y + h - b, r, b), u + ul - r, v + vl - b, r, b) -- right

	-- Middle
	renderer:DrawTexturedRect(self.tex, GwenRect(x, y + t, l, h - t - b), u, v + t, l, vl - b - t) -- left
	renderer:DrawTexturedRect(self.tex, GwenRect(x + l, y + t, w - l - r, h - t - b), u + l, v + t, ul - l - r, vl - b - t) -- middle
	renderer:DrawTexturedRect(self.tex, GwenRect(x + w - r, y + t, r, h - t - b), u + ul - r, v + t, r, vl - b - t) -- right
end

return BorderedTexture
