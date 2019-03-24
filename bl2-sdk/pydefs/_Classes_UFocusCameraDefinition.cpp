#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFocusCameraDefinition(py::module &m)
{
    py::class_< UFocusCameraDefinition,  UGBXDefinition   >(m, "UFocusCameraDefinition")
		.def_static("StaticClass", &UFocusCameraDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CamReturnTime", &UFocusCameraDefinition::CamReturnTime)
        .def_readwrite("CamMovementThreshold", &UFocusCameraDefinition::CamMovementThreshold)
        .def_readwrite("CamMovementSpeed_Fast", &UFocusCameraDefinition::CamMovementSpeed_Fast)
        .def_readwrite("CamMovementSpeed_Slow", &UFocusCameraDefinition::CamMovementSpeed_Slow)
          ;
}