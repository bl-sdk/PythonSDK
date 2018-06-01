local oo = oo
local SingleTexture = require("gwen.skins.texturing.single")
local BorderedTexture = require("gwen.skins.texturing.bordered")

local SkinBase = require("gwen.skins.base")
local TexturedSkin = oo.InheritClass(SkinBase, "Gwen.Skin.Textured")

local function NewBordered(...)
	local obj = BorderedTexture.New()
	obj:Init(...)
	return obj
end

local function NewSingle(...)
	local obj = SingleTexture.New()
	obj:Init(...)
	return obj
end

function TexturedSkin:Init(renderer, texName, fontName)
	-- texName is the name of the texture that will be given to the renderer
	self.renderer = renderer
	self.tex = self.renderer:LoadTexture(texName)
	self.defaultFont = self.renderer:LoadFont(fontName)

	self:InitializeColors()
	self:InitializeTextures()
end

function TexturedSkin:InitializeColors()
	-- TODO: Grab colour out of texture data
	-- These colours will have to be hard coded for the moment
	self.Colors = {}

	self.Colors.Window = {}
	self.Colors.Window.TitleActive = GwenColor(255, 255, 255, 204)
	self.Colors.Window.TitleInactive = GwenColor(255, 255, 255, 92)

	self.Colors.Label = {}
	self.Colors.Label.Default = GwenColor(209, 209, 209, 255)
	self.Colors.Label.Bright = GwenColor(255, 255, 255, 255)
	self.Colors.Label.Dark = GwenColor(10, 10, 10, 255)
	self.Colors.Label.Highlight = GwenColor(255, 0, 0, 255)

	self.Colors.Tree = {}
	self.Colors.Tree.Lines = GwenColor(202, 209, 215, 255)
	self.Colors.Tree.Normal = GwenColor(94, 102, 110, 255)
	self.Colors.Tree.Hover = GwenColor(51, 148, 240, 255)
	self.Colors.Tree.Selected = GwenColor(255, 255, 255, 255)

	self.Colors.Properties = {}
	self.Colors.Properties.Line_Normal = GwenColor(156, 156, 156, 255)
	self.Colors.Properties.Line_Selected = GwenColor(156, 156, 156, 255)
	self.Colors.Properties.Line_Hover = GwenColor(156, 156, 156, 255)
	self.Colors.Properties.Column_Normal = GwenColor(255, 255, 255, 0)
	self.Colors.Properties.Column_Selected = GwenColor(118, 199, 255, 255)
	self.Colors.Properties.Column_Hover = GwenColor(118, 199,  255, 59)
	self.Colors.Properties.Label_Normal = GwenColor(115, 115, 115, 255)
	self.Colors.Properties.Label_Selected = GwenColor(255, 255, 255, 255)
	self.Colors.Properties.Label_Hover = GwenColor(168, 168, 168, 255)
	self.Colors.Properties.Border = GwenColor(210, 211, 212, 255)
	self.Colors.Properties.Title = GwenColor(67, 67, 67, 255)

	self.Colors.Button = {}
	self.Colors.Button.Normal = GwenColor(82, 82, 82, 255)
	self.Colors.Button.Hover = GwenColor(46, 114, 178, 255)
	self.Colors.Button.Down = GwenColor(255, 255, 255, 255)
	self.Colors.Button.Disabled = GwenColor(82, 82, 82, 179)

	self.Colors.Tab = {}
	self.Colors.Tab.Active = {}
	self.Colors.Tab.Active.Normal = GwenColor(255, 255, 255, 255)
	self.Colors.Tab.Active.Hover = GwenColor(255, 255, 255, 255)
	self.Colors.Tab.Active.Down = GwenColor(255, 255, 255, 255)
	self.Colors.Tab.Active.Disabled = GwenColor(233, 233, 233, 204)
	self.Colors.Tab.Inactive = {}
	self.Colors.Tab.Inactive.Normal = GwenColor(255, 255, 255, 102)
	self.Colors.Tab.Inactive.Hover = GwenColor(249, 249, 249, 153)
	self.Colors.Tab.Inactive.Down = GwenColor(255, 255, 255, 255)
	self.Colors.Tab.Inactive.Disabled = GwenColor(210, 210, 210, 204)

	self.Colors.Category = {}
	self.Colors.Category.Header = GwenColor(255, 255, 255, 230)
	self.Colors.Category.Header_Closed = GwenColor(255, 255, 255, 153)
	self.Colors.Category.Line = {}
	self.Colors.Category.Line.Text = GwenColor(119, 119, 119, 255)
	self.Colors.Category.Line.Text_Hover = GwenColor(255, 255, 255, 255)
	self.Colors.Category.Line.Text_Selected = GwenColor(255, 255, 255, 255)
	self.Colors.Category.Line.Button = GwenColor(255, 255, 255, 0)
	self.Colors.Category.Line.Button_Hover = GwenColor(255, 255, 255, 0)
	self.Colors.Category.Line.Button_Selected = GwenColor(255, 216, 0, 255)
	self.Colors.Category.LineAlt = {}
	self.Colors.Category.LineAlt.Text = GwenColor(136, 136, 136, 255)
	self.Colors.Category.LineAlt.Text_Hover = GwenColor(255, 255, 255, 255)
	self.Colors.Category.LineAlt.Text_Selected = GwenColor(255, 255, 255, 255)
	self.Colors.Category.LineAlt.Button = GwenColor(0, 0, 0, 26)
	self.Colors.Category.LineAlt.Button_Hover = GwenColor(0, 0, 0, 26)
	self.Colors.Category.LineAlt.Button_Selected = GwenColor(255, 216, 0, 255)

	self.Colors.ModalBackground = GwenColor(255, 255, 255, 51)
	self.Colors.TooltipText = GwenColor(124, 124, 124, 255)
end

function TexturedSkin:InitializeTextures()
	-- TODO: Alignment
	local tex = self.tex

	self.Textures = {}

	self.Textures.Shadow = NewBordered(tex, 448, 0, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Tooltip = NewBordered(tex, 128, 320, 127, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.StatusBar = NewBordered(tex, 128, 288, 127, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Selection = NewBordered(tex, 384, 32, 31, 31, GwenMargin(4, 4, 4, 4))

	self.Textures.Panel = {}
	self.Textures.Panel.Normal = NewBordered(tex, 256, 0, 63, 63, GwenMargin(16, 16, 16, 16))
	self.Textures.Panel.Bright = NewBordered(tex, 256 + 64, 0, 63, 63, GwenMargin(16, 16, 16, 16))
	self.Textures.Panel.Dark = NewBordered(tex, 256, 64, 63, 63, GwenMargin(16, 16, 16, 16))
	self.Textures.Panel.Highlight = NewBordered(tex, 256 + 64, 64, 63, 63, GwenMargin(16, 16, 16, 16))

	self.Textures.Window = {}
	self.Textures.Window.Normal = NewBordered(tex, 0, 0, 127, 127, GwenMargin(8, 32, 8, 8))
	self.Textures.Window.Inactive = NewBordered(tex, 128, 0, 127, 127, GwenMargin(8, 32, 8, 8))

	self.Textures.Checkbox = {}
	self.Textures.Checkbox.Active = {}
	self.Textures.Checkbox.Active.Checked = NewSingle(tex, 448, 32, 15, 15)
	self.Textures.Checkbox.Active.Normal = NewSingle(tex, 464, 32, 15, 15)
	self.Textures.Checkbox.Disabled = {}
	self.Textures.Checkbox.Disabled.Checked = NewSingle(tex, 448, 48, 15, 15)
	self.Textures.Checkbox.Disabled.Normal = NewSingle(tex, 464, 48, 15, 15)

	self.Textures.RadioButton = {}
	self.Textures.RadioButton.Active = {}
	self.Textures.RadioButton.Active.Checked = NewSingle(tex, 448, 64, 15, 15)
	self.Textures.RadioButton.Active.Normal = NewSingle(tex, 464, 64, 15, 15)
	self.Textures.RadioButton.Disabled = {}
	self.Textures.RadioButton.Disabled.Checked = NewSingle(tex, 448, 80, 15, 15)
	self.Textures.RadioButton.Disabled.Normal = NewSingle(tex, 464, 80, 15, 15)

	self.Textures.TextBox = {}
	self.Textures.TextBox.Normal = NewBordered(tex, 0, 150, 127, 21, GwenMargin(4, 4, 4, 4))
	self.Textures.TextBox.Focus = NewBordered(tex, 0, 172, 127, 21, GwenMargin(4, 4, 4, 4))
	self.Textures.TextBox.Disabled = NewBordered(tex, 0, 193, 127, 21, GwenMargin(4, 4, 4, 4))

	self.Textures.Menu = {}
	self.Textures.Menu.Strip = NewBordered(tex, 0, 128, 127, 21, GwenMargin(1, 1, 1, 1))
	self.Textures.Menu.BackgroundWithMargin = NewBordered(tex, 128, 128, 127, 63, GwenMargin(24, 8, 8, 8))
	self.Textures.Menu.Background = NewBordered(tex, 128, 192, 127, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.Menu.Hover = NewBordered(tex, 128, 256, 127, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Menu.RightArrow = NewSingle(tex, 464, 112, 15, 15)
	self.Textures.Menu.Check = NewSingle(tex, 448, 112, 15, 15)

	self.Textures.Tab = {}
	self.Textures.Tab.Control = NewBordered(tex, 0, 256, 127, 127, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Bottom = {}
	self.Textures.Tab.Bottom.Active = NewBordered(tex, 0, 416, 63, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Bottom.Inactive = NewBordered(tex, 0 + 128, 416, 63, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Top = {}
	self.Textures.Tab.Top.Active = NewBordered(tex, 0, 384, 63, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Top.Inactive = NewBordered(tex, 0 + 128, 384, 63, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Left = {}
	self.Textures.Tab.Left.Active = NewBordered(tex, 64, 384, 31, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Left.Inactive = NewBordered(tex, 64 + 128, 384, 31, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Right = {}
	self.Textures.Tab.Right.Active = NewBordered(tex, 96, 384, 31, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.Right.Inactive = NewBordered(tex, 96 + 128, 384, 31, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.Tab.HeaderBar = NewBordered(tex, 128, 352, 127, 31, GwenMargin(4, 4, 4, 4))

	self.Textures.Window = {}
	self.Textures.Window.Close = NewSingle(tex, 32, 448, 31, 31)
	self.Textures.Window.Close_Hover = NewSingle(tex, 64, 448, 31, 31)
	self.Textures.Window.Close_Down = NewSingle(tex, 96, 448, 31, 31)
	self.Textures.Window.Maxi = NewSingle(tex, 32 + 96 * 2, 448, 31, 31)
	self.Textures.Window.Maxi_Hover = NewSingle(tex, 64 + 96 * 2, 448, 31, 31)
	self.Textures.Window.Maxi_Down = NewSingle(tex, 96 + 96 * 2, 448, 31, 31)
	self.Textures.Window.Restore = NewSingle(tex, 32 + 96 * 2, 448 + 32, 31, 31)
	self.Textures.Window.Restore_Hover = NewSingle(tex, 64 + 96 * 2, 448 + 32, 31, 31)
	self.Textures.Window.Restore_Down = NewSingle(tex, 96 + 96 * 2, 448 + 32, 31, 31)
	self.Textures.Window.Mini = NewSingle(tex, 32 + 96, 448, 31, 31)
	self.Textures.Window.Mini_Hover = NewSingle(tex, 64 + 96, 448, 31, 31)
	self.Textures.Window.Mini_Down = NewSingle(tex, 96 + 96, 448, 31, 31)

	self.Textures.Tree = {}
	self.Textures.Tree.Background = NewBordered(tex, 256, 128, 127, 127, GwenMargin(16, 16, 16, 16))
	self.Textures.Tree.Plus = NewSingle(tex, 448, 96, 15, 15)
	self.Textures.Tree.Minus = NewSingle(tex, 464, 96, 15, 15)

	self.Textures.Input = {}

	self.Textures.Input.Button = {}
	self.Textures.Input.Button.Normal = NewBordered(tex, 480, 0, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.Button.Hovered = NewBordered(tex, 480, 32, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.Button.Disabled = NewBordered(tex, 480, 64, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.Button.Pressed = NewBordered(tex, 480, 96, 31, 31, GwenMargin(8, 8, 8, 8))

	self.Textures.Scroller = {}

	self.Textures.Scroller.LeftButton_Normal = NewBordered(tex, 464, 208, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.LeftButton_Hover = NewBordered(tex, 480, 208, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.LeftButton_Down = NewBordered(tex, 464, 272, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.LeftButton_Disabled = NewBordered(tex, 480 + 48, 272, 15, 15, GwenMargin(2, 2, 2, 2))

	self.Textures.Scroller.UpButton_Normal = NewBordered(tex, 464, 208 + 16, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.UpButton_Hover = NewBordered(tex, 480, 208 + 16, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.UpButton_Down = NewBordered(tex, 464, 272 + 16, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.UpButton_Disabled = NewBordered(tex, 480 + 48, 272 + 16, 15, 15, GwenMargin(2, 2, 2, 2))

	self.Textures.Scroller.RightButton_Normal = NewBordered(tex, 464, 208 + 32, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.RightButton_Hover = NewBordered(tex, 480, 208 + 32, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.RightButton_Down = NewBordered(tex, 464, 272 + 32, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.RightButton_Disabled = NewBordered(tex, 480 + 48,	272 + 32, 15, 15, GwenMargin(2, 2, 2, 2))

	self.Textures.Scroller.DownButton_Normal = NewBordered(tex, 464, 208 + 48, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.DownButton_Hover = NewBordered(tex, 480, 208 + 48, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.DownButton_Down = NewBordered(tex, 464, 272 + 48, 15, 15, GwenMargin(2, 2, 2, 2))
	self.Textures.Scroller.DownButton_Disabled = NewBordered(tex, 480 + 48, 272 + 48, 15, 15, GwenMargin(2, 2, 2, 2))

	self.Textures.Scroller.TrackV = NewBordered(tex, 384, 208, 15, 127, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonV_Normal = NewBordered(tex, 384 + 16, 208, 15, 127, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonV_Hover = NewBordered(tex, 384 + 32, 208, 15, 127, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonV_Down = NewBordered(tex, 384 + 48, 208, 15, 127, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonV_Disabled = NewBordered(tex, 384 + 64, 208, 15, 127, GwenMargin(4, 4, 4, 4))

	self.Textures.Scroller.TrackH = NewBordered(tex, 384, 128, 127, 15, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonH_Normal = NewBordered(tex, 384, 128 + 16, 127, 15, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonH_Hover = NewBordered(tex, 384, 128 + 32, 127, 15, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonH_Down = NewBordered(tex, 384, 128 + 48, 127, 15, GwenMargin(4, 4, 4, 4))
	self.Textures.Scroller.ButtonH_Disabled = NewBordered(tex, 384, 128 + 64, 127, 15, GwenMargin(4, 4, 4, 4))

	self.Textures.Input.ListBox = {}
	self.Textures.Input.ListBox.Background = NewBordered(tex, 256, 256, 63, 127, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.ListBox.Hovered = NewBordered(tex, 320, 320, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.ListBox.EvenLine = NewBordered(tex, 352, 256, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.ListBox.OddLine = NewBordered(tex, 352, 288, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.ListBox.EvenLineSelected = NewBordered(tex, 320, 256, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.Input.ListBox.OddLineSelected = NewBordered(tex, 320, 288, 31, 31, GwenMargin(8, 8, 8, 8))

	self.Textures.Input.ComboBox = {}
	self.Textures.Input.ComboBox.Normal = NewBordered(tex, 384, 336, 127, 31, GwenMargin(8, 8, 32, 8))
	self.Textures.Input.ComboBox.Hover = NewBordered(tex, 384, 336 + 32, 127, 31, GwenMargin(8, 8, 32, 8))
	self.Textures.Input.ComboBox.Down = NewBordered(tex, 384, 336 + 64, 127, 31, GwenMargin(8, 8, 32, 8))
	self.Textures.Input.ComboBox.Disabled = NewBordered(tex, 384, 336 + 96, 127, 31, GwenMargin(8, 8, 32, 8))

	self.Textures.Input.ComboBox.Button = {}
	self.Textures.Input.ComboBox.Button.Normal = NewSingle(tex, 496, 272, 15, 15)
	self.Textures.Input.ComboBox.Button.Hover = NewSingle(tex, 496, 272 + 16, 15, 15)
	self.Textures.Input.ComboBox.Button.Down = NewSingle(tex, 496, 272 + 32, 15, 15)
	self.Textures.Input.ComboBox.Button.Disabled = NewSingle(tex, 496, 272 + 48, 15, 15)

	self.Textures.Input.UpDown = {}

	self.Textures.Input.UpDown.Up = {}
	self.Textures.Input.UpDown.Up.Normal = NewSingle(tex, 384, 112, 7, 7)
	self.Textures.Input.UpDown.Up.Hover = NewSingle(tex, 384 + 8, 112, 7, 7)
	self.Textures.Input.UpDown.Up.Down = NewSingle(tex, 384 + 16, 112, 7, 7)
	self.Textures.Input.UpDown.Up.Disabled = NewSingle(tex, 384 + 24, 112, 7, 7)

	self.Textures.Input.UpDown.Down = {}
	self.Textures.Input.UpDown.Down.Normal = NewSingle(tex, 384, 120, 7, 7)
	self.Textures.Input.UpDown.Down.Hover = NewSingle(tex, 384 + 8, 120, 7, 7)
	self.Textures.Input.UpDown.Down.Down = NewSingle(tex, 384 + 16, 120, 7, 7)
	self.Textures.Input.UpDown.Down.Disabled = NewSingle(tex, 384 + 24, 120, 7, 7)

	self.Textures.ProgressBar = {}
	self.Textures.ProgressBar.Back = NewBordered(tex, 384, 0, 31, 31, GwenMargin(8, 8, 8, 8))
	self.Textures.ProgressBar.Front = NewBordered(tex, 384 + 32, 0, 31, 31, GwenMargin(8, 8, 8, 8))

	self.Textures.Input.Slider = {}

	self.Textures.Input.Slider.H = {}
	self.Textures.Input.Slider.H.Normal = NewSingle(tex, 416, 32, 15, 15)
	self.Textures.Input.Slider.H.Hover = NewSingle(tex, 416, 32 + 16, 15, 15)
	self.Textures.Input.Slider.H.Down = NewSingle(tex, 416, 32 + 32, 15, 15)
	self.Textures.Input.Slider.H.Disabled = NewSingle(tex, 416, 32 + 48, 15, 15)

	self.Textures.Input.Slider.V = {}
	self.Textures.Input.Slider.V.Normal = NewSingle(tex, 416 + 16, 32, 15, 15)
	self.Textures.Input.Slider.V.Hover = NewSingle(tex, 416 + 16, 32 + 16, 15, 15)
	self.Textures.Input.Slider.V.Down = NewSingle(tex, 416 + 16, 32 + 32, 15, 15)
	self.Textures.Input.Slider.V.Disabled = NewSingle(tex, 416 + 16, 32 + 48, 15, 15)

	self.Textures.CategoryList = {}
	self.Textures.CategoryList.Outer = NewBordered(tex, 256, 384, 63, 63, GwenMargin(8, 8, 8, 8))
	self.Textures.CategoryList.Inner = NewBordered(tex, 256 + 64, 384, 63, 63, GwenMargin(8, 21, 8, 8))
	self.Textures.CategoryList.Header = NewBordered(tex, 320, 352, 63, 31, GwenMargin(8, 8, 8, 8))

	self.Textures.GroupBox = NewBordered(tex, 0, 448, 31, 31, GwenMargin(8, 8, 8, 8))
end

return TexturedSkin
