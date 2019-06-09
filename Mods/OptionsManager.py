
class Options:
    """ A generic helper class that stores all of the option types available in the `PLUGINS` menu. """

    # Helpful boolean to tell the `SETTINGS` menu that the currently selected menu is the plugin menu.
    # We want to know this just so we can possibly remove all items in the `PLUGIN` menu, but not the `GAMEPLAY` menu.
    isMenuPluginMenu = False
    # We want this boolean to properly sort the PLUGINS menu. The menu should go after the `GAMEPAD` menu if its enabled.
    isGamepadConnected = False

    class Slider:
        """ This class is a holder for all slider option types, useful for specifying integer/float values. """

        EventID = 0
        OptionType = 3

        def __init__(
            self,
            Caption: str,
            Description: str,
            StartingValue: float,
            MinValue: float,
            MaxValue: float,
            Increment: float,
        ):
            self.Caption = Caption
            self.StartingValue = StartingValue
            self.MinValue = MinValue
            self.MaxValue = MaxValue
            self.Increment = Increment
            self.Description = Description
            self.CurrentValue = StartingValue

    class Spinner:
        """ This option is especially useful when you want the user to choose between two or more, specified options. """

        EventID = 0
        OptionType = 0

        def __init__(
            self,
            Caption: str,
            Description: str,
            StartingChoice: str,
            Choices: list,
        ):
            self.Caption = Caption
            self.StartingChoice = StartingChoice
            self.CurrentValue = StartingChoice
            self.Choices = Choices
            self.Description = Description

    class Boolean:
        """ This class is pretty much just a SpinnerOption, but is cleaner and more useful if you want a toggleable feature in your plugin. """

        EventID = 0
        OptionType = 0

        def __init__(self, Caption: str, Description: str, StartingValue: bool):
            self.Caption = Caption
            self.StartingChoiceIndex = int(StartingValue)
            self.CurrentValue = int(StartingValue)
            self.Description = Description
            self.Choices = ["Off", "On"]
    
    class Hidden:
        """ This class is a type of option that is never shown to the user but is specified in the settings.json file. 
        You can use this to store things the user has no need to see but is still important to have persistent. """
        OptionType = -1

        def __init__(self, valueName: str, StartingValue):
            self.Caption = valueName
            self._currentValue = StartingValue

        @property
        def CurrentValue(self):
            return self._currentValue

        @CurrentValue.setter
        def CurrentValue(self, value):
            self._currentValue = value
            storeModSettings()

