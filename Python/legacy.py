import bl2sdk
import os
import json


LegacyModBinariesDirectory = os.path.dirname(os.getcwd()) + "\\..\\.."
"""The path to the game's Binaries directory; this is the parent directory from
which we are executed."""


class LegacyMod(bl2sdk.BL2MOD):

	def __init__(self, filename):
		"""Initialize a new legacy mod object with the name of a file in the
		game's Binaries directory."""

		self.Filename = filename
		# Use the base name of the file as the name that will be displayed in
		# the mods menu.
		self.Name, extension = os.path.splitext(filename)

		self.Description = "Mod file found at:\n" + os.path.join(LegacyModBinariesDirectory, filename)
		self.Description += "\n\nUse BLCMM to configure options for this mod."

		self.KeyActions = { 'Enter': "Enable", 'Delete': "Hide Mod", 'Insert': "Unhide Mods" }


	def Enable(self):
		"""Invoked by the SDK when our mod is enabled from the mods menu."""

		# We will be looking up the object responsible for storing hotfixes.
		micropatch = None
		# Iterate over each Spark service object.
		for service in bl2sdk.UObject.FindObjectsContaining("SparkServiceConfiguration Transient.SparkServiceConfiguration"):
			# If the service's name is "micropatch" then it is the hotfix
			# object, and we are done.
			if service.ServiceName == "Micropatch":
				micropatch = service
				break

		# Create a dictionary of the existing hotfixes using the hotfix
		# objects's keys and values properties. Since we are interested in
		# unique hotfix values rather than keys, invert the mapping from keys to
		# values for our representation.
		hotfixes = dict(zip(micropatch.Values, micropatch.Keys))

		# Prevent a crash when the `set` console command attempts to update
		# arrays which were previously allocated by the SDK.
		micropatch.Keys = []
		micropatch.Values = []

		# Obtain the current player controller object.
		playerController = bl2sdk.GetEngine().GamePlayers[0].Actor
		try:
			# Use the controller to perform a console command executing the
			# legacy mod file. We wrap this in a `try` statement to suppress the
			# SDK's return value error.
			playerController.ConsoleCommand("exec \"" + self.Filename + "\"", 0)
		except:
			pass

		# If the executed file contained hotfixes, the hotfix object's
		# properties will now contain their keys and values. Update our
		# dictionary with these, inverting their mapping as described above.
		hotfixes.update(zip(micropatch.Values, micropatch.Keys))

		# Generate new lists from the final hotfix dictionary's keys and values,
		# and apply them to the hotfix object.
		micropatch.Keys = list(hotfixes.values())
		micropatch.Values = list(hotfixes.keys())


	def HandleKey(self, key):
		if key == 'Enter':
			self.Enable()
			del self.KeyActions['Enter']
			self.Status = "Enabled"

		elif key == 'Delete':
			LegacyModManager.IgnoredFiles.add(mod.Filename)
			LegacyModManager.SaveSettings()
			bl2sdk.Mods.remove(self)

		elif key == 'Insert':
			LegacyModManager.IgnoredFiles = set()
			LegacyModManager.SaveSettings()
			LegacyModManager.Populate()



class LegacyModManager():

	SettingsPath = os.path.join(os.getcwd(), "legacy_mods.json")

	def LoadSettings():
		"""Attempts to load the user's settings from their settings file."""
		try:
			with open(LegacyModManager.SettingsPath) as settingsFile:
				# Decode the JSON data contained in the settings file.
				settings = json.load(settingsFile)
				# Convert the settings file's list of ignored files to a set for
				# our own usage.
				LegacyModManager.IgnoredFiles = set(settings['ignored_files'])
		# If this fails, set up empty values for our settings.
		except:
			LegacyModManager.IgnoredFiles = set()


	def SaveSettings():
		"""Saves the current settings in JSON format to our settings file."""

		# Create a dictionary with our settings.
		settings = { 'ignored_files': list(LegacyModManager.IgnoredFiles) }
		# Save the settings dictionary to our settings file in JSON format.
		with open(LegacyModManager.SettingsPath, 'w') as settingsFile:
			json.dump(settings, settingsFile)


	def Populate():
		"""Populates the mods menu with legacy mods based on the files in the
		user's Binaries directory."""

		# Iterate over each file in the user's Binaries directory.
		for filename in os.listdir(LegacyModBinariesDirectory):
			# If the file is in our list of ignored ones, skip to the next.
			if filename in LegacyModManager.IgnoredFiles:
				continue

			if not filename.endswith('.txt') and '.' in filename:
				continue

			# We will determine if the file was already added to the mods menu.
			populated = False
			# Iterate over each existing mod in the menu.
			for mod in bl2sdk.Mods:
				# If the mod is a legacy mod and has the same file name as our
				# own, we will not be adding it again.
				if type(mod) is LegacyMod and mod.Filename == filename:
					populated = True
					break
			# If it was determined we will not be adding this mod, move on to
			# the next file.
			if populated:
				continue

			# Generate the full pathname for the file.
			filepath = os.path.join(LegacyModBinariesDirectory, filename)
			# If the file is a file and not a directory, create a new legacy mod
			# object for it, and add it to the mods menu.
			if os.path.isfile(filepath):
				bl2sdk.Mods.append(LegacyMod(filename))


# Perform an initial population of the mod menu.
LegacyModManager.LoadSettings()
LegacyModManager.Populate()
