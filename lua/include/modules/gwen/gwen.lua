require("gwen.util")

local gwen = {}

gwen.Colors = require("gwen.colors")
gwen.Keys = require("gwen.keys")

gwen.Renderer = {}
gwen.Skin = {}
gwen.Controls = {}

gwen.Renderer.Base = require("gwen.renderers.base")
gwen.Renderer.BL2 = require("gwen.renderers.bl2")

gwen.Skin.Base = require("gwen.skins.base")
gwen.Skin.Textured = require("gwen.skins.textured")

require("gwen.controls.Base")

return gwen
