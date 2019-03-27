# import base.sdk

# import base.engine
import sys
import bl2sdk
import random

def log(s):
    s = str(s)
    if not s.endswith('\n'):
        s += '\n'
    bl2sdk.Log(s)
print = log


def test_console():
    console = bl2sdk.UObject.FindObjectByFullName("WillowConsole WillowGameEngine.WillowGameViewportClient.WillowConsole")
    s = bl2sdk.FString("This is a test")
    console.eventOutputText(s)

def crash():
    print('a')
    objs = bl2sdk.UObject.GObjObjects()
    print('b')
    print(objs[1000])

# objs = bl2sdk.UObject.GObjObjects()
# print(objs[0:10])
# crash()

def rando():
    packages = ["GD_Assassin_Streaming_SF",
    "GD_Mercenary_Streaming_SF",
    "GD_Siren_Streaming_SF",
    "GD_Lilac_Psycho_Streaming_SF",
    "GD_Tulip_Mechro_Streaming_SF",
    "GD_Soldier_Streaming_SF"]

    for package in packages:
        bl2sdk.LoadPackage(package, 0, True)

    branches = bl2sdk.UObject.FindObjectsRegex(".*SkillTreeBranchDefinition .*")
    skills = bl2sdk.UObject.FindObjectsRegex(".*SkillDefinition .*")


    skill_packages = ["GD_Assassin_Skills",
    "GD_Mercenary_Skills",
    "GD_Siren_Skills",
    "GD_Lilac_Skills_",
    "GD_Tulip_Mechromancer_Skills",
    "GD_Soldier_Skills"]

    valid_skills = []

    for skill in skills:
        full_name = skill.GetFullName()
        if full_name.split('.')[-1].count('_') :
            continue
        valid = False
        for skill_package in skill_packages:
            if skill_package in full_name:
                valid = True
        if not valid:
            continue
        valid_skills.append(skill)

    for branch in branches:
        full_name = branch.GetFullName()
        if 'Default__' in full_name or "ActionSkill" in full_name:
            continue
        for tier in branch.Tiers:
            for x in range(len(tier.Skills)):
                pos = random.randint(0, len(valid_skills) - 1)
                tier.Skills.__setitem__(x, valid_skills[pos])
                del valid_skills[pos]

rando()