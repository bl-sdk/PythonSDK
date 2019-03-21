#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkSwitch()
{
    py::class_< UAkSwitch,  UAkObject   >("UAkSwitch")
        .def_readwrite("SwitchGroup", &UAkSwitch::SwitchGroup)
        .def("StaticClass", &UAkSwitch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}