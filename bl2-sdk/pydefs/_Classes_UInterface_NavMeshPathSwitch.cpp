#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathSwitch()
{
    py::class_< UInterface_NavMeshPathSwitch,  UInterface_NavMeshPathObject   >("UInterface_NavMeshPathSwitch")
        .def("StaticClass", &UInterface_NavMeshPathSwitch::StaticClass, py::return_value_policy::reference)
        .def("eventAIActivateSwitch", &UInterface_NavMeshPathSwitch::eventAIActivateSwitch)
        .staticmethod("StaticClass")
  ;
}