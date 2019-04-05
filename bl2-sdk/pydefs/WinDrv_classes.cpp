#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_WinDrv_classes(py::module &m)
{
	py::class_< UWindowsClient, UAudioDevice >(m, "UWindowsClient")
		.def_static("StaticClass", &UWindowsClient::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AudioDeviceClass", &UWindowsClient::AudioDeviceClass, py::return_value_policy::reference)
		.def_readwrite("AllowJoystickInput", &UWindowsClient::AllowJoystickInput)
		;
	py::class_< UXnaForceFeedbackManager, UAudioDevice >(m, "UXnaForceFeedbackManager")
		.def_static("StaticClass", &UXnaForceFeedbackManager::StaticClass, py::return_value_policy::reference)
		;
	py::class_< UFacebookWindows, UAudioDevice >(m, "UFacebookWindows")
		.def_static("StaticClass", &UFacebookWindows::StaticClass, py::return_value_policy::reference)
		;

}