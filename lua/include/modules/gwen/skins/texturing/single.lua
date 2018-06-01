local oo = oo
local SingleTexture = oo.CreateClass("Gwen.Skin.Texturing.SingleTexture")

function SingleTexture:Init(tex, u, v, ul, vl)
	self.tex = tex
	self.u = u
	self.v = v
	self.ul = ul
	self.vl = vl
end

function SingleTexture:Draw(renderer, bounds, col)
	renderer:SetDrawColor(col)
	renderer:DrawTexturedRect(self.tex, bounds, self.u, self.v, self.ul, self.vl)
end

function SingleTexture:DrawCenter(renderer, bounds, col)
	bounds.x = bounds.x + (bounds.w - self.ul) * 0.5
	bounds.y = bounds.y + (bounds.h - self.vl) * 0.5
	bounds.w = ul
	bounds.h = vl

	self:Draw(renderer, bounds, col)
end

return SingleTexture
