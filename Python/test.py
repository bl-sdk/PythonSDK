import bl2sdk

# def process_hook(caller, stack, result, function):
# 	code = stack.Code
# 	OfferingId = stack.popFString()
# 	x = []
# 	for i in range(9):
# 		x.append(str(stack.popULong()))
# 	ContentTitleText = stack.popFString()
# 	PriceText = stack.popFString()
# 	DescriptionText = stack.popFString()
# 	print("'{}' [{}] '{}' '{}' '{}'".format(OfferingId.AsString(), ', '.join(x), ContentTitleText.AsString(), PriceText.AsString(), DescriptionText.AsString()))
# 	stack.Code = code
# 	# objs, count = stack.popRawTArray()
# 	# for x in range(count):
# 	# 	print("{}".format(objs.popObject().GetFullName()))
# 	# stack.SkipFunction()
# 	# new_obj = bl2sdk.ConstructObject(Class=obj.Class, InOuter=obj.Outer, Name=bl2sdk.FName("Test"), SetFlags=0x1, Template=obj)
# 	# old_tiers = new_obj.Root.Children[1].Tiers
# 	# new_obj.Root.Children[1].Tiers = [old_tiers[0], old_tiers[1], old_tiers[-1]]
# 	# caller.Initialize(new_obj)
# 	return True

# bl2sdk.RemoveScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "InjectMods")
# bl2sdk.RegisterScriptHook("Function WillowGame.MarketplaceGFxMovie.CreateContentItem", "InjectMods", process_hook)

# def ReplaceDLCWithMods(caller, stack, result, function):
# 	EventID = stack.popInt()
# 	Caption = stack.popFString()
# 	bDisabled = stack.popULong()
# 	bNew = stack.popULong()
# 	if Caption.AsString() == "$WillowMenu.WillowScrollingListDataProviderFrontEnd.DLC":
# 		Caption = bl2sdk.FString("MODS")
# 	caller.AddListItem(EventID, Caption, bDisabled, bNew)
# 	stack.SkipFunction()
# 	return False


# def HookMainMenuPopulateForMods(caller, stack, result, function):
# 	bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods", ReplaceDLCWithMods)
# 	caller.Populate(stack.popObject())
# 	bl2sdk.RemoveScriptHook("Function WillowGame.WillowScrollingList.AddListItem", "ReplaceDLCWithMods")
# 	stack.SkipFunction()
# 	return False

# bl2sdk.RemoveScriptHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods")
# bl2sdk.RegisterScriptHook("Function WillowGame.WillowScrollingListDataProviderFrontEnd.Populate", "HookMainMenuPopulateForMods", HookMainMenuPopulateForMods)

# for x in bl2sdk.UObject.FindObjectsContaining("Class "):
# 	if not (x.bCooked):
# 		print(x.GetFullName())

# bl2sdk.LoadPackage("GD_Assassin_Streaming_SF")
# AtOneWithTheGun = bl2sdk.FindObject("SkillDefinition", "GD_Assassin_Skills.Sniping.AtOneWithTheGun")
# Branch = bl2sdk.FindObject("SkillTreeBranchDefinition", "GD_Assassin_Skills.SkillTree.Branch_Sniping")
# NewSkill = bl2sdk.ConstructObject(Class="SkillDefinition", Name="MyBrandNewSkill", Template=AtOneWithTheGun, Outer=AtOneWithTheGun.Outer, SetFlags=0x1)
# Branch.Tiers[3].Skills.Set(0, NewSkill)

# def InjectSkills(caller, stack, result, function):
# 	code = stack.Code
# 	SkillTreeDef = stack.popObject()
# 	stack.Code = code
# 	Branch = SkillTreeDef.Root.Children[1]
# 	SomeSkill = Branch.Tiers[0].Skills[0]
# 	NewSkill = bl2sdk.ConstructObject(Class="SkillDefinition", Name="MyBrandNewSkill", Template=SomeSkill, Outer=SomeSkill.Outer)
# 	Branch.Tiers[0].Skills.Set(1, NewSkill)
# 	return True
pc = bl2sdk.GetEngine().GamePlayers[0].Actor
InfectionStateDef = bl2sdk.ConstructObject(Class="AnemoneInfectionDefinition", Outer=AIS.Outer, SetFlags=3)
# Fog = bl2sdk.FindObject("HeightFog", "SanctuaryAir_Light.TheWorld:PersistentLevel.HeightFog_0")
# print(InfectionStateDef)
# print(Fog)
pc.Pawn.AnemoneInfectionState = pc.Spawn(bl2sdk.UObject.FindClass("AnemoneInfectionState", False), pc, "Test", pc.Location, pc.Rotation, None, True)
AIS = pc.Pawn.AnemoneInfectionState
AIS.WPC = pc
AIS.InfectionRate = 1.0
AIS.ToggleInfectionEffects(True, pc)
AIS.bIsLocalPlayer = True
# pc.Pawn.SetAnemoneInfectionState(True,True,pc.Pawn,InfectionStateDef,Fog)

# x = bl2sdk.ConstructObject(bl2sdk.UObject.StaticClass())
# print(x)
# objs = bl2sdk.UObject.FindObjectsContaining("WillowPlayerController ")
# pc = bl2sdk.GetEngine().GamePlayers[0].Actor
# obj = bl2sdk.ConstructObject(Class=bl2sdk.UTrainingMessageDefinition.StaticClass(), Name=bl2sdk.FName("Test"), SetFlags=0)
# pc.eventHandleTrainingEventDefinition(obj)
# tree = bl2sdk.UObject.FindObjectsContaining("SkillTreeDefinition ")[-1]
# branch = tree.Branches[1]
# definition = branch.Definition
# obj = bl2sdk.ConstructObject(Class=definition.Class, InOuter=definition.Outer, Name=bl2sdk.FName("Test"), SetFlags=0x403, Template=definition)
# tree.ObjectFlags.A = tree.ObjectFlags.A | 0x4000
# tree.Branches[2].Definition.ObjectFlags.A = tree.Branches[2].Definition.ObjectFlags.A | 0x4000
# print("%s: 0x%x, 0x%x, 0x%x, 0x%x" % (definition.GetFullName(), definition.HashNext.Dummy, definition.HashOuterNext.Dummy, definition.StateFrame.Dummy, definition.LinkerIndex.Dummy))
# print("%s: 0x%x, 0x%x, 0x%x, 0x%x" % (obj.GetFullName(), obj.HashNext.Dummy, obj.HashOuterNext.Dummy, obj.StateFrame.Dummy, obj.LinkerIndex.Dummy))
# tree.Branches.Set(2, definition)
# for y in x:
# 	print(y.GetFullName())