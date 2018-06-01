local oo = oo
local error = error

local SkinBase = oo.CreateClass("Gwen.Skin.Base")

oo.NotImplemented(SkinBase, "DrawGenericPanel", "control")
oo.NotImplemented(SkinBase, "DrawButton", "control")

function SkinBase:GetRender()
	return self.renderer
end

function SkinBase:SetRender(renderer)
	self.renderer = renderer
end

return SkinBase

--[[
virtual void DrawGenericPanel( Controls::Base* control ) = 0;

virtual void DrawButton( Controls::Base* control, bool bDepressed, bool bHovered, bool bDisabled ) = 0;
virtual void DrawTabButton( Controls::Base* control, bool bActive, int dir ) = 0;
virtual void DrawTabControl( Controls::Base* control ) = 0;
virtual void DrawTabTitleBar( Controls::Base* control ) = 0;


virtual void DrawMenuItem( Controls::Base* control, bool bSubmenuOpen, bool bChecked ) = 0;
virtual void DrawMenuStrip( Controls::Base* control ) = 0;
virtual void DrawMenu( Controls::Base* control, bool bPaddingDisabled ) = 0;
virtual void DrawMenuRightArrow( Controls::Base* control ) = 0;

virtual void DrawRadioButton( Controls::Base* control, bool bSelected, bool bDepressed ) = 0;
virtual void DrawCheckBox( Controls::Base* control, bool bSelected, bool bDepressed ) = 0;
virtual void DrawGroupBox( Controls::Base* control, int textStart, int textHeight, int textWidth ) = 0;
virtual void DrawTextBox( Controls::Base* control ) = 0;

virtual void DrawWindow( Controls::Base* control, int topHeight, bool inFocus ) = 0;
virtual void DrawWindowCloseButton( Gwen::Controls::Base* control, bool bDepressed, bool bHovered, bool bDisabled ) = 0;
virtual void DrawWindowMaximizeButton( Gwen::Controls::Base* control, bool bDepressed, bool bHovered, bool bDisabled, bool bMaximized ) = 0;
virtual void DrawWindowMinimizeButton( Gwen::Controls::Base* control, bool bDepressed, bool bHovered, bool bDisabled ) = 0;


virtual void DrawHighlight( Controls::Base* control ) = 0;
virtual void DrawStatusBar( Controls::Base* control ) = 0;

virtual void DrawShadow( Controls::Base* control ) = 0;
virtual void DrawScrollBarBar( Controls::Base* control, bool bDepressed, bool isHovered, bool isHorizontal ) = 0;
virtual void DrawScrollBar( Controls::Base* control, bool isHorizontal, bool bDepressed ) = 0;
virtual void DrawScrollButton( Controls::Base* control, int iDirection, bool bDepressed, bool bHovered, bool bDisabled ) = 0;
virtual void DrawProgressBar( Controls::Base* control, bool isHorizontal, float progress ) = 0;

virtual void DrawListBox( Controls::Base* control ) = 0;
virtual void DrawListBoxLine( Controls::Base* control, bool bSelected, bool bEven ) = 0;

virtual void DrawSlider( Controls::Base* control, bool bIsHorizontal, int numNotches, int barSize ) = 0;
virtual void DrawSlideButton( Gwen::Controls::Base* control, bool bDepressed, bool bHorizontal ) = 0;

virtual void DrawComboBox( Controls::Base* control, bool bIsDown, bool bIsMenuOpen ) = 0;
virtual void DrawComboDownArrow( Gwen::Controls::Base* control, bool bHovered, bool bDown, bool bOpen, bool bDisabled ) = 0;
virtual void DrawKeyboardHighlight( Controls::Base* control, const Gwen::Rect & rect, int offset ) = 0;
virtual void DrawToolTip( Controls::Base* control ) = 0;

virtual void DrawNumericUpDownButton( Controls::Base* control, bool bDepressed, bool bUp ) = 0;

virtual void DrawTreeButton( Controls::Base* control, bool bOpen ) = 0;
virtual void DrawTreeControl( Controls::Base* control ) = 0;
virtual void DrawTreeNode( Controls::Base* ctrl, bool bOpen, bool bSelected, int iLabelHeight, int iLabelWidth, int iHalfWay, int iLastBranch, bool bIsRoot );

virtual void DrawPropertyRow( Controls::Base* control, int iWidth, bool bBeingEdited, bool bHovered );
virtual void DrawPropertyTreeNode( Controls::Base* control, int BorderLeft, int BorderTop );
virtual void DrawColorDisplay( Controls::Base* control, Gwen::Color color ) = 0;
virtual void DrawModalControl( Controls::Base* control ) = 0;
virtual void DrawMenuDivider( Controls::Base* control ) = 0;

virtual void DrawCategoryHolder( Controls::Base* ctrl ) = 0;
virtual void DrawCategoryInner( Controls::Base* ctrl, bool bCollapsed ) = 0;


virtual void SetRender( Gwen::Renderer::Base* renderer )
{
	m_Render = renderer;
}
virtual Gwen::Renderer::Base* GetRender()
{
	return m_Render;
}

virtual void DrawArrowDown( Gwen::Rect rect );
virtual void DrawArrowUp( Gwen::Rect rect );
virtual void DrawArrowLeft( Gwen::Rect rect );
virtual void DrawArrowRight( Gwen::Rect rect );
virtual void DrawCheck( Gwen::Rect rect );
]]

