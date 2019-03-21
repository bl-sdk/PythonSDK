#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITinnitusTarget(py::object m)
{
    py::class_< UITinnitusTarget,  UInterface   >(m, "UITinnitusTarget")
        .def("StaticClass", &UITinnitusTarget::StaticClass, py::return_value_policy::reference)
        .def("TriggerTinnitus", &UITinnitusTarget::TriggerTinnitus)
        .def("TriggerTinnitusFromLocation", &UITinnitusTarget::TriggerTinnitusFromLocation)
          ;
}