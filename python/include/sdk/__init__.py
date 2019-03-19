import BL2SDK

BL2SDK.g_loadedClasses = []
BL2SDK.g_classFuncs = {}
BL2SDK.g_enums = {}

from . import consts
from . import enums
from . import structs
from . import classes
from . import funcs
from . import TArrayTypes

structs.Base.init()
structs.Core.init()
structs.Engine.init()
structs.GameFramework.init()
structs.GFxUI.init()
structs.GearboxFramework.init()
structs.WillowGame.init()
structs.AkAudio.init()
structs.IpDrv.init()
structs.OnlineSubsystemSteamworks.init()

classes.Base.init()
classes.Core.init()
classes.Engine.init()
classes.GameFramework.init()
classes.GFxUI.init()
classes.GearboxFramework.init()
classes.WillowGame.init()
classes.AkAudio.init()
classes.IpDrv.init()
classes.WinDrv.init()
classes.XAudio2.init()
classes.OnlineSubsystemSteamworks.init()

TArrayTypes.init()
