#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITinnitusTarget()
{
    py::class_< UITinnitusTarget,  UInterface   >("UITinnitusTarget")
        .def("StaticClass", &UITinnitusTarget::StaticClass, py::return_value_policy::reference)
        .def("TriggerTinnitus", &UITinnitusTarget::TriggerTinnitus)
        .def("TriggerTinnitusFromLocation", &UITinnitusTarget::TriggerTinnitusFromLocation)
        .staticmethod("StaticClass")
  ;
}