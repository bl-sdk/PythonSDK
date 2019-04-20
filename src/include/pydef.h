#pragma once

#include "stdafx.h"

namespace py = pybind11;
void Export_pystes_Core_structs(py::module &m);
void Export_pystes_Core_classes(py::module &m);
void Export_pystes_Engine_structs(py::module &m);
void Export_pystes_Engine_classes(py::module &m);
void Export_pystes_GameFramework_structs(py::module &m);
void Export_pystes_GameFramework_classes(py::module &m);
void Export_pystes_GFxUI_structs(py::module &m);
void Export_pystes_GFxUI_classes(py::module &m);
void Export_pystes_GearboxFramework_structs(py::module &m);
void Export_pystes_GearboxFramework_classes(py::module &m);
void Export_pystes_WillowGame_structs(py::module &m);
void Export_pystes_WillowGame_classes(py::module &m);
void Export_pystes_AkAudio_structs(py::module &m);
void Export_pystes_AkAudio_classes(py::module &m);
void Export_pystes_IpDrv_structs(py::module &m);
void Export_pystes_IpDrv_classes(py::module &m);
void Export_pystes_WinDrv_structs(py::module &m);
void Export_pystes_WinDrv_classes(py::module &m);
void Export_pystes_XAudio2_structs(py::module &m);
void Export_pystes_XAudio2_classes(py::module &m);
void Export_pystes_OnlineSubsystemSteamworks_structs(py::module &m);
void Export_pystes_OnlineSubsystemSteamworks_classes(py::module &m);
void Export_pystes_TArray(py::module &m);
void Export_pystes_gamedefines(py::module &m);