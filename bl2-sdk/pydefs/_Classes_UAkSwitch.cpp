#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkSwitch(py::object m)
{
    py::class_< UAkSwitch,  UAkObject   >(m, "UAkSwitch")
        .def_readwrite("SwitchGroup", &UAkSwitch::SwitchGroup)
        .def("StaticClass", &UAkSwitch::StaticClass, py::return_value_policy::reference)
          ;
}