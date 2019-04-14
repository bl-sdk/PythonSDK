import bl2sdk
import sys
import random

class CrossSkillRandomizer(bl2sdk.BL2MOD):
    loadedPackages = False
    Name = "Cross Class Skill Randomizer"
    Description =  "Randomize all the skills!"

    def Enable(self):
        # print("[Randomizer] Initialized. Run `py randomize('<vault hunter>', <seed>)` to randomize. Leave seed blank for a random seed.")
        # print("[Randomizer] Warning: Running `randomize` at any time other than your first time on the main menu may cause instability.")
        self.randomize('all')

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
    'BurnBabyBurn',
    'CounterStrike',
    'CloseEnough',
    'CloudKill',
    'CookingUpTrouble',
    'CrisisManagement',
    'CriticalAscention',
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
    'BuzzAxeBombadier',
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
    'DivergentLikness',
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
    'WithClaws',
    'BloodSoakedShields',
    'DeathFromAbove',]

    bloodlust_skills = ['BloodOverdrive',
    'BloodyRevival',
    'BloodBath',
    'FuelTheBlood',
    'BoilingBlood',
    'NervousBlood',
    'Bloodsplosion']

    hunters = {
        'axton': ('Soldier', axton_skills),
        'salvador': ('Mercenary', salvador_skills),
        'zero': ('Assassin', zer0_skills),
        'maya': ('Siren', maya_skills),
        'krieg': ('Lilac', krieg_skills),
        'gaige': ('Tulip', gaige_skills)
    }

    def randomize_branches(self, rng, branches, valid_skills, skill_map):
        added_bl = False
        for branch in branches:
            has_bloodlust = False
            has_hellborn = False
            for tier in branch.Tiers:
                for x in range(len(tier.Skills)):
                    skill = tier.Skills[x]
                    if skill:
                        if skill.GetName() == '_Bloodlust' or skill.GetName() == 'FireStatusDetector' or skill.GetName() == 'AppliedStatusEffectListener':
                            continue
                        pos = rng.randint(0, len(valid_skills) - 1)
                        tier.Skills.Set(x, skill_map[valid_skills[pos]])
                        skill_name = valid_skills[pos]
                        if skill_name == 'Anarchy':
                            valid_skills += self.anarchy_skills
                        if skill_name == 'BloodyTwitch' or skill_name == 'BloodfilledGuns':
                            if not added_bl:
                                valid_skills = list(valid_skills + self.bloodlust_skills)
                                added_bl = True
                            has_bloodlust = True
                        if 'Hellborn' in skill_map[valid_skills[pos]].GetFullName():
                            has_hellborn = True
                        del valid_skills[pos]
            if has_bloodlust or has_hellborn:
                new_skills = [skill.GetFullName().split(' ')[-1] for skill in branch.Tiers[-1].Skills if skill]
                if has_bloodlust:
                    new_skills.append('GD_Lilac_Skills_Bloodlust.Skills._Bloodlust')
                if has_hellborn:
                    new_skills.append('GD_Lilac_Skills_Hellborn.Skills.FireStatusDetector')
                    new_skills.append('GD_Lilac_Skills_Hellborn.Skills.AppliedStatusEffectListener')
                tiers = []
                for tier in branch.Tiers[:-1]:
                    skills_string = ','.join(["SkillDefinition'{}'".format(s.GetFullName().split(' ')[-1]) for s in tier.Skills if s])
                    tiers.append("(Skills=({}),PointsToUnlockNextTier={})".format(skills_string, tier.PointsToUnlockNextTier))
                tiers.append("(Skills=({}),PointsToUnlockNextTier={})".format(','.join(["SkillDefinition'{}'".format(s) for s in new_skills]), 1))
                setCommand = 'set {} Tiers ({})'.format(branch.GetFullName().split(' ')[-1], ','.join(tiers))
                playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
                playerController.ConsoleCommand(bl2sdk.FString(setCommand), 0)

    def randomize_hunter(self, package_name, hunter_skills, skill_mapping, rng):
        branches = bl2sdk.UObject.FindObjectsContaining("SkillTreeBranchDefinition GD_{}".format(package_name))

        skill_branches = []
        for branch in branches:
            full_name = branch.GetFullName()
            if 'Default__' not in full_name and "ActionSkill" not in full_name:
                skill_branches.append(branch)

        self.randomize_branches(rng, skill_branches, self.base_skills + hunter_skills, skill_mapping)

    def load_packages(self):
        packages = ["GD_Assassin_Streaming_SF",
        "GD_Mercenary_Streaming_SF",
        "GD_Siren_Streaming_SF",
        "GD_Lilac_Psycho_Streaming_SF",
        "GD_Tulip_Mechro_Streaming_SF",
        "GD_Soldier_Streaming_SF"]

        for package in packages:
            bl2sdk.LoadPackage(package, 0, False)

    def randomize(self, who, seed = None):
        if who.lower().replace('0', 'o') not in self.hunters.keys() and who != 'all':
            print("Unable to randomize, expected vault hunter name or 'all'")
            return

        if not seed:
            seed = random.randrange(sys.maxsize)
        bl2sdk.Log("Randomizing with seed '{}'".format(seed))
        rng = random.Random(seed)

        load_packages()

        skills = bl2sdk.UObject.FindObjectsContaining("SkillDefinition ")

        skill_mapping = {}
        for skill in skills:
            if skill:
                skill_mapping[skill.GetFullName().split('.')[-1]] = skill
                skill.ObjectFlags.A |= 0x4000

        if who != 'all':
            package_name, hunter_skills = self.hunters[who.lower().replace('0', 'o')]
            self.randomize_hunter(package_name, hunter_skills, skill_mapping, rng)
        else:
            for package_name, hunter_skills in self.hunters.values():
                self.randomize_hunter(package_name, hunter_skills, skill_mapping, rng)

bl2sdk.Mods.append(CrossSkillRandomizer())