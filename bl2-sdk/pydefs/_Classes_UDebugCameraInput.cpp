#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDebugCameraInput(py::module &m)
{
    py::class_< UDebugCameraInput,  UPlayerInput   >(m, "UDebugCameraInput")
		.def_static("StaticClass", &UDebugCameraInput::StaticClass, py::return_value_policy::reference)
        .def("InputKey", &UDebugCameraInput::InputKey)
          ;
}