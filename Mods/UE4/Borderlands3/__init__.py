import unrealsdk
import importlib
import os
import traceback
import sys

# Need to make sure this is all loaded and aliased up before loading any mods
import ModMenu  # noqa

unrealsdk.SDK_VERSION = 1

_full_traceback = False

for name in os.listdir(os.path.dirname(__file__)):
    absolute_path = os.path.join(os.path.dirname(__file__), name)
    if not os.path.isdir(absolute_path):
        continue
    if name.startswith(".") or name in ("__pycache__", "ModMenu"):
        continue

    try:
        if f"Mods.{name}" in sys.modules:
            importlib.reload(sys.modules[f"Mods.{name}"])
        else:
            importlib.import_module(f".{name}", "Mods")
    except Exception:
        unrealsdk.Log(f"Failed to import mod: {name}")
        tb = traceback.format_exc().split('\n')
        if _full_traceback:
            for line in tb:
                unrealsdk.Log(line)
        else:
            unrealsdk.Log(f"    {tb[-4].strip()}")
            unrealsdk.Log(f"    {tb[-3].strip()}")
            unrealsdk.Log(f"    {tb[-2].strip()}")

