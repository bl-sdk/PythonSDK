UnrealEngine PythonSDK
======================

An UnrealEngine Plugin that enables using Python to write plugins that interact directly with UE objects.

It is used to write mods for `compatible games <#list-of-compatible-games>`_, and comes with a number of `builtin mods <#builtin-mods>`_.

.. contents::

General Information
-------------------

* Website: https://bl-sdk.github.io
* Mods list: https://bl-sdk.github.io/mods/
* Source code: https://github.com/bl-sdk/PythonSDK
* Issue tracker: https://github.com/bl-sdk/PythonSDK/issues
* Discord: https://discord.gg/VJXtHvh


List of Compatible Games
------------------------

* Borderlands 2 (1.8.7)
* Borderlands: The Pre-Sequel!


Installation
------------

Installation Steps
^^^^^^^^^^^^^^^^^^

1. Download the `latest version <https://github.com/bl-sdk/PythonSDK/releases/latest>`_ of ``PythonSDK.zip``:

.. image:: https://i.imgur.com/tBlidGi.png
   :alt: PythonSDK Download Page

2. Open `PythonSDK.zip`. It should contain 4 items:

.. image:: https://i.imgur.com/jd77dnB.png
   :alt: PythonSDK.zip Contents

3. Locate your game's files folder. In Steam, this can be done by right-clicking on the game in your library, selecting "Properties," then in the "Local Files" section, clicking "Browse":

.. image:: https://i.imgur.com/eyfn3ht.png
   :alt: Steam Contextual Menu

.. image:: https://i.imgur.com/wok2ZUA.png
   :alt: Steam Local Files Properties

4. In the game's files folder, navigate to the ``Binaries`` folder, then to the ``Win32`` folder. This folder should contain the ``.exe`` for your game (i.e. ``Borderlands2.exe`` or ``BorderlandsPreSequel.exe``).

5. Copy the 4 items from ``PythonSDK.zip`` **exactly** as they are to the ``Win32`` folder. Note that ``pythonXX.zip`` should *not* be un-zipped.

.. image:: https://i.imgur.com/hIvNi7w.png
   :alt: Win32 Folder Contents

6. If you had previously installed an older version of the SDK, delete any old files that weren't overwritten by the ones in the latest `PythonSDK.zip`.

7. You are done, and may launch the game (if it is running, relaunch it now). If all is well, you should see a "Mods" menu in the main menu.

If the SDK fails to run with the files correctly in place as described above, you may need to download and install `Microsoft Visual C++ Redistributable <https://aka.ms/vs/16/release/vc_redist.x86.exe>`_.

Linux (SteamPlay/Proton and Wine)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

PythonSDK does not yet work natively on Linux, but it seems to work well under SteamPlay/Proton and Wine.  To load properly, though, Wine needs to be told to allow ``ddraw.dll`` overrides.  Additionally, the latest SDK release (as of February 29, 2020) wants the main executable name to be the usual one; ``Borderlands2.exe``/``BorderlandsPreSequel.exe``, so the common workaround of a ``Launcher.exe`` symlink/copy won't do the trick.  Instead, set the game's launch options (via ``Properties -> General``) to:
::
    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/Borderlands2.exe}"' -- %command%

Or, for TPS:
::
    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/BorderlandsPreSequel.exe}"' -- %command%

Note that using ``WINEDLLOVERRIDES`` for ``ddraw`` isn't supported by the Wine developers, so if you experience problems with the game while using this method, please don't ask the WineHQ team for assistance.


Borderlands Ingame Mod Manager
------------------------------

On the main menu, the ``Downloadable Content`` entry is replace with a ``Mods`` entry:

.. image:: https://i.imgur.com/HOHcwYh.jpg
   :alt: Mods entry on the main menu

.. image:: https://i.imgur.com/8ZaUsDP.png
   :alt: Mod Manager

Mods can be enabled and disabled by selecting them and pressing :kbd:`Enter`.


Installing New Mods
-------------------

Mods live in the ``Borderlands 2\Binaries\Win32\Mods`` folder. Each mod should be place in it's own subfolder, and contain an ``__init__.py``. Example ``__init__.py`` path: ``Win32\Mods\SkillRandomizer\__init__.py``


Builtin Mods
------------

Backpack Manager
^^^^^^^^^^^^^^^^
Customize the size of your character's backpack on the fly!

- Author: `FromDarkHell <https://github.com/FromDarkHell>`_
- `Source </Mods/BackpackManager>`_

Borderlands 2 Map Reloader
^^^^^^^^^^^^^^^^^^^^^^^^^^
Quickly farm items and save quit at a button press!

- Author: `FromDarkHell <https://github.com/FromDarkHell>`_
- `Source </Mods/Quickload>`_

Borderlands Easy Read Only
^^^^^^^^^^^^^^^^^^^^^^^^^^
Toggle Read Only on a button press

- `Source </Mods/ReadOnly>`_

Cross Class Skill Randomizer
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Randomize all the skills!

- Author: `Abahbob <https://github.com/Matt-Hurd>`_
- `Source </Mods/SkillRandomizer>`_ 


Console Commands
----------------

* ``py <python code>`` runs arbitrary python code.  
* ``pyexec <python file>`` runs arbitrary python files from `binaries/Win32/Mods/`.


Documentation
-------------

At the moment mostly provided in docstrings in the source code.
