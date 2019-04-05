#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_WinDrv_classes(py::module &m)
{
	py::class_< UWindowsClient, UAudioDevice >(m, "UWindowsClient")
		.def_static("StaticClass", &UWindowsClient::StaticClass, py::return_value_policy::reference)
		.def_readwrite("UnknownData00[0x15C]", &UWindowsClient::UnknownData00[0x15C])
		.def_readwrite("AudioDeviceClass", &UWindowsClient::AudioDeviceClass, py::return_value_policy::reference)
		.def_readwrite("UnknownData01[0x30]", &UWindowsClient::UnknownData01[0x30])
		.def_readwrite("AllowJoystickInput", &UWindowsClient::AllowJoystickInput)
		.def_readwrite("UnknownData02[0xC]", &UWindowsClient::UnknownData02[0xC])
		;
	py::class_< UXnaForceFeedbackManager, UAudioDevice >(m, "UXnaForceFeedbackManager")
		.def_static("StaticClass", &UXnaForceFeedbackManager::StaticClass, py::return_value_policy::reference)
		;
	py::class_< UFacebookWindows, UAudioDevice >(m, "UFacebookWindows")
		.def_static("StaticClass", &UFacebookWindows::StaticClass, py::return_value_policy::reference)
		.def_readwrite("UnknownData00[0x38]", &UFacebookWindows::UnknownData00[0x38])
		;

}