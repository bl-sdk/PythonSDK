#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkSwitchGroup(py::object m)
{
    py::class_< UAkSwitchGroup,  UAkObject   >(m, "UAkSwitchGroup")
        .def("StaticClass", &UAkSwitchGroup::StaticClass, py::return_value_policy::reference)
          ;
}