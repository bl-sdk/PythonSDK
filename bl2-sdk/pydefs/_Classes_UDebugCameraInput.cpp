#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDebugCameraInput()
{
    py::class_< UDebugCameraInput,  UPlayerInput   >("UDebugCameraInput")
        .def("StaticClass", &UDebugCameraInput::StaticClass, py::return_value_policy::reference)
        .def("InputKey", &UDebugCameraInput::InputKey)
        .staticmethod("StaticClass")
  ;
}