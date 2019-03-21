#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkSwitchGroup()
{
    py::class_< UAkSwitchGroup,  UAkObject   >("UAkSwitchGroup")
        .def("StaticClass", &UAkSwitchGroup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}