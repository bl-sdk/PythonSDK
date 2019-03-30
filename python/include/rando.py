import sys
import random

base_skills = ['5Shotsor6',
'Able',
'Accelerate',
'AllIneedIsOne',
'AllInTheReflexes',
'Ambush',
'Asbestos',
'AtOneWithTheGun',
'Bore',
'Backdraft',
'Backstab',
'BeLikeWater',
'BlightPhoenix',
'BloodSoakedShields',
'BurnBabyBurn',
'CounterStrike',
'CloseEnough',
'CloudKill',
'CookingUpTrouble',
'CrisisManagement',
'CriticalAscention',
'DeathFromAbove',
'DeathMark',
'DelusionalDamage',
'DoOrDie',
'DutyCalls',
'ElectricalBurn',
'ElementalElation',
'ElementalEmpathy',
'EmbraceThePain',
'EmptyRage',
'EvilEnchantress',
'Expertise',
'Followthrough',
'FancyMathematics',
'FastHands',
'Fearless',
'FeedTheMeat',
'FilledtotheBrim',
'FireFiend',
'FlameFlare',
'Fleet',
'Flicker',
'Forbearance',
'Foresight',
'FuelTheFire',
'Grenadier',
'Grit',
'Diehard',
'HeadShot',
'HealthY',
'Immolate',
'Impact',
'ImTheJuggernaut',
'ImYourHuckleberry',
'Incite',
'Inconceivable',
'Inertia',
'InterspersedOutburst',
'IronHand',
'JustGotReal',
'KillConfirmed',
'Killer',
'KillingBlow',
'KineticReflection',
'LastDitchEffort',
'LayWaste',
'LifeTap',
'LikeTheWind',
'MetalStorm',
'MindsEye',
'MoneyShot',
'MorePep',
'Myelin',
'NoKillLikeOverkill',
'NumbedNerves',
'OneShotOneKill',
'Onslaught',
'Optics',
'OutOfBubblegum',
'Overload',
'PainIsPower',
'Precision',
'Preparation',
'Pressure',
'PullThePin',
'QuickCharge',
'QuickDraw',
'Ranger',
'RavingRetribution',
'Ready',
'Reaper',
'Recompense',
'RedeemTheSoul',
'Restoration',
'Resurgence',
'RisingShot',
'SaltTheWound',
'Scorn',
'SexualTyrannosaurus',
'ShockAndAAAGGGHHH',
'ShockStorm',
'SilenceTheVoices',
'SmallerLighterFaster',
'Steady',
'StripTheFlesh',
'Sustenance',
'TheBetterHalf',
'TheNthDegree',
'ThrillOfTheKill',
'TwoFang',
'UnstoppableForce',
'Velocity',
'Ward',
'Willing',
'WiresDontTalk',
'LockedandLoaded',
'AutoLoader',
'Anarchy',
'BloodyTwitch',
'BloodfilledGuns']

krieg_skills = ['BloodTrance',
'BuzzAxeBombardier',
'FuelTheRampage',
'HellfireHalitosis',
'LightTheFuse',
'ReleaseTheBeast',
'TasteOfBlood']

gaige_skills = ['20PercentCooler',
'AnnoyedAndroid',
'BuckUp',
'ExplosiveClap',
'MadeOfSternerStuff',
'MakeItSparkle',
'OneTwoBoom',
'PotentAsAPony',
'RobotRampage',
'SharingIsCaring',
'StrengthOfFiveGorillas',
'TheStare',
'UpshotRobot']

axton_skills = ['Battlefront',
'DoubleUp',
'Gemini',
'LongBowTurret',
'LaserSight',
'Mag-Lock',
'Nuke',
'PhalanxShield',
'ScorchedEarth',
'Sentry']

zer0_skills = ['DeathBlossom',
'Execute',
'Grim',
'Innervate',
'ManyMustFall',
'Unforseen']

maya_skills = ['ChainReaction',
'Converge',
'Elated',
'Helios',
'Quicken',
'Res',
'Ruin',
'SubSequence',
'Suspension',
'SweetRelease',
'ThoughtLock',
'Wreck']

salvador_skills = ['AintGotTimeToBleed',
'BusThatCantSlowDown',
'ComeAtMeBro',
'DivergentLikeness',
'DoubleYourFun',
'DownNotOut',
'FistfulOfHurt',
'GetSome',
'ImReadyAlready',
'KeepFiring',
'KeepItPipingHot',
'LastLonger',
'SteadyAsSheGoes',
'YippeeKiYay']

anarchy_skills = ['PreshrunkCyberpunk',
'Discord',
'TypecastIconoclast',
'RationalAnarchist',
'WithClaws']

bloodlust_skills = ['BloodOverdrive',
'BloodyRevival',
'BloodBath',
'FuelTheBlood',
'BoilingBlood',
'NervousBlood',
'Bloodsplosion']

hunters = {
    'axton': axton_skills,
    'salvador': salvador_skills,
    'zero': zer0_skills,
    'maya': maya_skills,
    'krieg': krieg_skills,
    'gaige': gaige_skills
}

def test_console():
    console = bl2sdk.UObject.FindObjectByFullName("WillowConsole WillowGameEngine.WillowGameViewportClient.WillowConsole")
    s = bl2sdk.FString("This is a test")
    console.eventOutputText(s)

if 'loadedPackages' not in vars() and 'loadedPackages' not in globals():
    loadedPackages = False

def randomize_branches(rng, branches, valid_skills, skill_map):
    for branch in branches:
        for tier in branch.Tiers:
            for x in range(len(tier.Skills)):
                skill = tier.Skills[x]
                if skill:
                    pos = rng.randint(0, len(valid_skills) - 1)
                    tier.Skills.__setitem__(x, skill_map[valid_skills[pos]])
                    del valid_skills[pos]

def rando(seed = None):
    global loadedPackages
    if not seed:
        seed = random.randrange(sys.maxsize)
    bl2sdk.Log("Randomizing with seed '{}'".format(seed))
    rng = random.Random(seed)

    if not loadedPackages:
        loadedPackages = True
        packages = ["GD_Assassin_Streaming_SF",
        "GD_Mercenary_Streaming_SF",
        "GD_Siren_Streaming_SF",
        "GD_Lilac_Psycho_Streaming_SF",
        "GD_Tulip_Mechro_Streaming_SF",
        "GD_Soldier_Streaming_SF"]

        for package in packages:
            bl2sdk.LoadPackage(package, 0, True)

    skills = bl2sdk.UObject.FindObjectsContaining("SkillDefinition ")

    skill_mapping = {}
    for skill in skills:
        if skill:
            skill_mapping[skill.GetFullName().split('.')[-1]] = skill
            skill.ObjectFlags.A |= 0x4000

    branches = bl2sdk.UObject.FindObjectsContaining("SkillTreeBranchDefinition GD_Siren")

    skill_branches = []
    for branch in branches:
        full_name = branch.GetFullName()
        if 'Default__' not in full_name and "ActionSkill" not in full_name:
            skill_branches.append(branch)

    randomize_branches(rng, skill_branches, base_skills + maya_skills, skill_mapping)