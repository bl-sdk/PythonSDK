#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACoverGroup()
{
    py::class_< ACoverGroup,  AInfo   >("ACoverGroup")
        .def_readwrite("CoverLinkRefs", &ACoverGroup::CoverLinkRefs)
        .def_readwrite("AutoSelectRadius", &ACoverGroup::AutoSelectRadius)
        .def_readwrite("AutoSelectHeight", &ACoverGroup::AutoSelectHeight)
        .def("StaticClass", &ACoverGroup::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ACoverGroup::OnToggle)
        .def("ToggleGroup", &ACoverGroup::ToggleGroup)
        .def("DisableGroup", &ACoverGroup::DisableGroup)
        .def("EnableGroup", &ACoverGroup::EnableGroup)
        .staticmethod("StaticClass")
  ;
}