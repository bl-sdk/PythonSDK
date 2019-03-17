local ffi = require("ffi")
local engine = engine

local console = ffi.cast("struct UWillowConsole*", engine.FindObject("WillowConsole WillowGameEngine.WillowGameViewportClient.WillowConsole"))

-- test_table = {skill_classes.GD_Soldier_Skills[1], skill_classes.GD_Soldier_Skills[2]}
-- skill_defs = ffi.new("struct USkillDefinition*[2]", test_table)
-- skills = TArray.Create("struct USkillDefinition**", skill_defs)

-- tier = ffi.new("struct FTier", skills, 5)

-- tier_defs = ffi.new("struct FTier[1]", {tier})
-- tiers = TArray.Create("struct FTier*", tier_defs)
-- print(tier.PointsToUnlockNextTier)








-- l print(skill_classes.GD_Soldier_Skills[0])
-- soldierBranch = ffi.cast("struct USkillTreeBranchDefinition*", engine.FindObject("SkillTreeBranchDefinition GD_Soldier_Skills.SkillTree.Branch_Guerrilla"))
-- skillTree = ffi.cast("struct USkillTreeBranchDefinition*", engine.FindObject("SkillTreeBranchDefinition GD_Soldier_Skills.SkillTree.Branch_Guerrilla"))


-- function exampleFind()
--     return ffi.cast("struct UWillowGameEngine*", engine.FindObjectExactClass("WillowGameEngine Transient.WillowGameEngine", engine.Classes.UWillowGameEngine))
-- end