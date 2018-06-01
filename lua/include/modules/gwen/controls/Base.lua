local oo = oo
local table = table
local keys = require("gwen.keys")

local BaseControl = oo.CreateClass("Gwen.Control.Base")

function BaseControl:Init(parent)
	self.parent = nil
	self.actualParent = nil
	self.innerPanel = nil
	self.skin = nil
	self:SetParent(parent)
	self.hidden = false
	self.bounds = GwenRect(0, 0, 10, 10)
	self.padding = GwenPadding(0, 0, 0, 0)
	self.margin = GwenMargin(0, 0, 0, 0)
	self.iDock = 0
	self:RestrictToParent(false)
	self:SetMouseInputEnabled(true)
	self:SetKeyboardInputEnabled(false)
	self:Invalidate()
	self:SetCursor("normal")
	self:SetToolTip(nil)
	self:SetTabable(false)
	self:SetShouldDrawBackground(true)
	self.disabled = false
	self.includeInSize = true

	self.children = {}
	self.innerBounds = GwenRect(0, 0, 0, 0)
	self.renderBounds = GwenRect(0, 0, 0, 0)
end

function BaseControl:Delete()
	-- Traverse backwards so we can delete as we go through
	for i=#self.children,1,-1 do
		self.children[i]:Delete()
		table.remove(self.children, i)
	end

	-- TODO
end

function BaseControl:DelayedDelete()
	self:GetCanvas():AddDelayedDelete(self)
end

function BaseControl:SetParent(parent)
	if self.parent == parent then return end

	-- If this control already has a parent, remove this control from it
	-- and add it to the new one.
	if self.parent then
		self.parent:RemoveChild(self)
	end

	self.parent = parent
	self.actualParent = nil

	if parent then
		parent:AddChild(self)
	end
end

function BaseControl:GetParent()
	return self.parent
end

function BaseControl:GetCanvas()
	if not self.parent then return nil end

	return self.parent:GetCanvas()
end

function BaseControl:GetChildren()
	if self.innerPanel then
		return self.innerPanel:GetChildren()
	else
		return self.children
	end
end

function BaseControl:IsChild(control)
	return table.contains(self.children, control)
end

function BaseControl:NumChildren()
	return #self.children
end

function BaseControl:GetChild(i)
	return self.children[i]
end

function BaseControl:SizeToChildren(w, h)
	if w == nil then w = true end
	if h == nil then h = true end

	local size = self:ChildrenSize()
	size.x = size.x + self:GetPadding().right
	size.y = size.y + self:GetPadding().bottom

	return self:SetSize(w and size.x or self:Width(), h and size.y or self:Height())
end

function BaseControl:ChildrenSize()
	local size = GwenPoint()

	for _,child in self.children do
		if not child:Hidden() and child:ShouldIncludeInSize() then
			size.x = math.max(size.x, child:Right())
			size.y = math.max(size.y, child:Bottom())
		end
	end

	return size
end

function BaseControl:Think()
	return
end

function BaseControl:AddChild(child)
	if self.innerPanel then
		self.innerPanel:AddChild(child)
		return
	end

	table.insert(self.children, child)
	child.actualParent = self
end

function BaseControl:RemoveChild(child)
	if self.innerPanel == child then
		self.innerPanel = nil
	end

	if self.innerPanel then
		self.innerPanel:RemoveChild(child)
	end

	table.removeValue(self.children, child)
end

function BaseControl:RemoveAllChildren()
	self.innerPanel = nil
	self.children = {}
end

function BaseControl:SendToBack()
	if not self.actualParent then return end
	if self.actualParent.children[1] == self then return end

	table.removeValue(self.actualParent.children, self)
	table.insert(self.actualParent.children, self)

	self:InvalidateParent()
	self:Redraw()
end

function BaseControl:BringToFront()
	if not self.actualParent then return end
	if self.actualParent.children[self.actualParent:NumChildren()] == self then return end

	table.removeValue(self.actualParent.children, self)
	table.insert(self.actualParent.children, self)

	self:InvalidateParent()
	self:Redraw()
end

function BaseControl:BringNextToControl(child, behind)
	error("NYI: BaseControl:BringNextToControl")
end

function BaseControl:LocalPosToCanvas(localPos)
	if not self.parent then return localPos end

	local x = localPos.x + self:X()
	local y = localPos.y + self:Y()

	-- If the parent has an innerPanel and we're a child of it, add its offset
	-- onto our position.
	if self.parent.innerPanel and self.parent.innerPanel:IsChild(self) then
		x = x + self.parent.innerPanel:X()
		y = y + self.parent.innerPanel:Y()
	end

	return self.parent:LocalPosToCanvas(GwenPoint(x, y))
end

function BaseControl:CanvasPosToLocal(canvasPos)
	if not self.parent then return canvasPos end

	local x = canvasPos.x - self:X()
	local y = canvasPos.y - self:Y()

	if self.parent.innerPanel and self.parent.innerPanel:IsChild(self) then
		x = x - self.parent.innerPanel:X()
		y = y - self.parent.innerPanel:Y()
	end

	return self.parent:CanvasPosToLocal(GwenPoint(x, y))
end

function BaseControl:Dock(iDock)
	if self.iDock == iDock then return end

	self.iDock = iDock
	self:Invalidate()
	self:InvalidateParent()
end

function BaseControl:GetDock()
	return self.iDock
end

function BaseControl:RestrictToParent(restrict)
	self.restrictToParent = restrict
end

function BaseControl:ShouldRestrictToParent()
	return self.restrictToParent
end

function BaseControl:X()
	return self.bounds.x
end

function BaseControl:Y()
	return self.bounds.y
end

function BaseControl:Width()
	return self.bounds.w
end

function BaseControl:Height()
	return self.bounds.h
end

function BaseControl:Bottom()
	return self.bounds.y + self.bounds.h + self.margin.bottom
end

function BaseControl:Right()
	return self.bounds.x + self.bounds.w + self.margin.right
end

function BaseControl:GetMargin()
	return self.margin
end

function BaseControl:GetPadding()
	return self.padding
end

-- Two functions - either call it with a point or call it with x and y
function BaseControl:SetPos(x, y)
	if y == nil then
		-- x is a point
		y = x.y
		x = x.x
	end

	self:SetBounds(x, y, self:Width(), self:Height())
end

function BaseControl:GetPos()
	return GwenPoint(self:X(), self:Y())
end

function BaseControl:SetWidth(w)
	self:SetSize(w, self:Height())
end

function BaseControl:SetHeight(h)
	self:SetSize(self:Width(), h)
end

-- Two functions - either call with a point or call it with w and h
function BaseControl:SetSize(w, h)
	if h == nil then
		-- w is a point
		h = w.y
		w = w.x
	end

	self:SetBounds(self:X(), self:Y(), w, h)
end

function BaseControl:GetSize()
	return GwenPoint(self:Width(), self:Height())
end

-- Two functions - either call with GwenRect or with x,y,w,h
function BaseControl:SetBounds(x, y, w, h)
	if y == nil then
		-- x is a GwenRect
		y = x.y
		w = x.w
		h = x.h
		x = x.x
	end

	local oldBounds = table.copy(self:GetBounds())
	self.bounds = GwenRect(x, y, w, h)
	self:OnBoundsChanged(oldBounds)
end

function BaseControl:SetPadding(padding)
	self.padding = table.copy(padding)
	self:Invalidate()
	self:InvalidateParent()
end

function BaseControl:SetMargin(margin)
	self.margin = table.copy(margin)
	self:Invalidate()
	self:InvalidateParent()
end

function BaseControl:MoveTo(x, y)
	local parent = self:GetParent()
	if self.restrictToParent and parent then
		if (x - self.padding.left) < parent.margin.left then 
			x = parent.margin.left + self.padding.left
		end

		if (y - self.padding.top) < parent.margin.top then 
			y = parent.margin.top + self.padding.top
		end

		if (w + self:Width() + self.padding.right > parent:Width() - parent.margin.right) then
			x = parent:Width() - parent.margin.right - self:Width() - self.padding.right
		end

		if (y + self:Height() + self.padding.bottom > parent:Height() - parent.margin.bottom) then
			y = parent:Height() - parent.margin.bottom - self:Height() - self.padding.bottom
		end
	end

	self:SetBounds(x, y, self:Width(), self:Height())
end

function BaseControl:MoveBy(x, y)
	self:MoveTo(self:X() + x, self:Y() + y)
end

function BaseControl:GetBounds()
	return self.bounds
end

function BaseControl:GetControlAt(x, y, onlyIfMouseEnabled)
	if onlyIfMouseEnabled == nil then onlyIfMouseEnabled = true end

	if self:Hidden() then return nil end
	if x < 0 or y < 0 or x >= self:Width() or y >= self:Height() then return nil end

	-- Iterate backwards over children
	for i=#self.children,1,-1 do
		local child = self.children[i]
		local found = child:GetControlAt(x - child:X(), y - child:Y(), onlyIfMouseEnabled)
		if found ~= nil then return found end
	end

	if onlyIfMouseEnabled and not self:GetMouseInputEnabled() then
		return nil
	end

	return self
end

function BaseControl:OnBoundsChanged(oldBounds)
	if self:GetParent() then
		self:GetParent():OnChildBoundsChanged(oldBounds, self)
	end

	if self.bounds.w ~= oldBounds.w or self.bounds.h ~= oldBounds.h then
		self:Invalidate()
	end

	self:Redraw()
	self:UpdateRenderBounds()
end

function BaseControl:OnChildBoundsChanged(oldChildBounds, child)
	return
end

function BaseControl:OnScaleChanged()
	for _,child in self.children do
		child:OnScaleChanged()
	end
end

function BaseControl:GetInnerBounds()
	return self.innerBounds
end

function BaseControl:GetRenderBounds()
	return self.renderBounds
end

function BaseControl:UpdateRenderBounds()
	self.renderBounds.x = 0
	self.renderBounds.y = 0
	self.renderBounds.w = self.bounds.w
	self.renderBounds.h = self.bounds.h
end

function BaseControl:DoRender(skin)
	if self.skin then
		skin = self.skin
	end

	self:Think()
	self:RenderRecursive(skin, self:GetBounds())
end

function BaseControl:RenderRecursive(skin, clipRect)
	local renderer = skin:GetRender()
	local oldRenderOffset = table.copy(renderer:GetRenderOffset())
	renderer:AddRenderOffset(clipRect)

	self:RenderUnder(skin)

	local oldRegion = table.copy(renderer:ClipRegion())

	-- If this control is clipping, change the clip rect to ourselves
	-- (if not then we still clip using our parents clip rect)
	if self:ShouldClip() then
		renderer:AddClipRegion(clipRect)

		if not renderer:ClipRegionVisible() then
			renderer:SetRenderOffset(oldRenderOffset)
			renderer:SetClipRegion(oldRegion)
			return
		end
	end

	-- Render this control and children controls
	renderer:StartClip()
	
	self:Render(skin)

	if #self.children ~= 0 then
		-- Render children
		for _,child in ipairs(self.children) do
			if not child:Hidden() then
				child:DoRender(skin)
			end
		end
	end

	renderer:EndClip()

	-- Render overlay/focus
	renderer:SetClipRegion(oldRegion)
	renderer:StartClip()

	self:RenderOver(skin)
	self:RenderFocus(skin)

	renderer:EndClip()
	renderer:SetRenderOffset(oldRenderOffset)
end

function BaseControl:ShouldClip()
	return true
end

function BaseControl:Render(skin)
	return
end

function BaseControl:RenderUnder(skin)
	return
end

function BaseControl:RenderOver(skin)
	return
end

function BaseControl:RenderFocus(skin)
	return
end

function BaseControl:SetHidden(hidden)
	if self.hidden == hidden then return end

	self.hidden = hidden
	self:Invalidate()
	self:Redraw()
end

function BaseControl:Hidden()
	return self.hidden
end

function BaseControl:Visible()
	if self.hidden then return false end

	if self:GetParent() then
		return self:GetParent():Visible()
	end

	return true
end

function BaseControl:Hide()
	self:SetHidden(true)
end

function BaseControl:Show()
	self:SetHidden(false)
end

function BaseControl:SetSkin(skin, doChildren)
	if doChildren == nil then doChildren = false end

	if self.skin == skin then return end

	self.skin = skin
	self:Invalidate()
	self:Redraw()
	self:OnSkinChanged(skin)

	if doChildren then
		for _,child in self.children do
			child:SetSkin(skin, true)
		end
	end
end

function BaseControl:GetSkin()
	return self.skin
end

function BaseControl:ShouldDrawBackground()
	return self.shouldDrawBackground
end

function BaseControl:SetShouldDrawBackground(b)
	self.shouldDrawBackground = b
end

function BaseControl:OnSkinChanged(newSkin)
	return
end

function BaseControl:OnMouseMoved(x, y, deltaX, deltaY)
	return
end

function BaseControl:OnMouseWheeled(delta)
	if self.actualParent then
		return self.actualParent:OnMouseWheeled(delta)
	end

	return false
end

function BaseControl:OnMouseClickLeft(x, y, down)
	return
end

function BaseControl:OnMouseClickRight(x, y, down)
	return
end

function BaseControl:OnMouseDoubleClickLeft(x, y)
	self:OnMouseClickLeft(x, y, true)
end

function BaseControl:OnMouseDoubleClickRight(x, y)
	self:OnMouseClickRight(x, y, true)
end

function BaseControl:OnLostKeyboardFocus()
	return
end

function BaseControl:OnKeyboardFocus()
	return
end

function BaseControl:SetMouseInputEnabled(b)
	self.mouseInputEnabled = b
end

function BaseControl:GetMouseInputEnabled()
	return self.mouseInputEnabled
end

function BaseControl:NeedsInputChars()
	return false
end

function BaseControl:OnChar(c)
	return false
end

local keyFuncMap = {}
local function AddKeysToMap(keys)
	for _,keyName in ipairs(keys) do
		keyFuncMap[keys[keyName]] = "OnKey" .. keyName
	end
end
--[[
AddKeysToMap({
	"Tab", "Space", "Return", "Backspace", "Delete", "Right", "Left",
	"Home", "End", "Up", "Down", "Escape"
})
]]

function BaseControl:OnKeyPress(key, press)
	if press == nil then press = true end

	local handled = false
	if keyFuncMap[key] ~= nil then
		handled = self[keyFuncMap[key]](self, press)
	end

	if not handled and self:GetParent() then
		self:GetParent():OnKeyPress(key, press)
	end

	return handled
end

function BaseControl:OnKeyRelease(key)
	return self:OnKeyPress(key, false)
end

function BaseControl:OnPaste(from)
	return
end

function BaseControl:OnCopy(from)
	return
end

function BaseControl:OnCut(from)
	return
end

function BaseControl:OnSelectAll(from)
	return
end

function BaseControl:OnKeyTab(down)
	if not down then return true end

	if self:GetCanvas().NextTab then
		self:GetCanvas().NextTab:Focus()
		self:Redraw()
	end

	return true
end

-- TODO: Could fill in all the other OnKey events here

function BaseControl:OnMouseEnter()
	
end

return BaseControl
