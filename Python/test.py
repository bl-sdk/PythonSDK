import bl2sdk

# for o in bl2sdk.UObject.FindObjectsContaining("Texture2D "):
# 	if o.Mips:
# 		if o.Mips.ArrayNum == 1:
# 			print(o)

# t = bl2sdk.FindObject("Texture2D", "CD_Skins_Siren_MainGame.Textures.Logo_Gearbox")
# print(t.SizeY)

console = bl2sdk.FindObject("WillowConsole", "Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0")
console.DefaultTexture_Black.DumpObject()
# t = bl2sdk.LoadTexture("mopi.png", "TextureLoadTest")
# objs = bl2sdk.UObject.FindObjectsContaining("WillowConsole ")
# for obj in objs:
# 	obj.DefaultTexture_Black = t