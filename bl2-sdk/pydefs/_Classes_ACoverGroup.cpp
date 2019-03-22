#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACoverGroup(py::module &m)
{
    py::class_< ACoverGroup,  AInfo   >(m, "ACoverGroup")
        .def_readwrite("CoverLinkRefs", &ACoverGroup::CoverLinkRefs)
        .def_readwrite("AutoSelectRadius", &ACoverGroup::AutoSelectRadius)
        .def_readwrite("AutoSelectHeight", &ACoverGroup::AutoSelectHeight)
        .def("OnToggle", &ACoverGroup::OnToggle)
        .def("ToggleGroup", &ACoverGroup::ToggleGroup)
        .def("DisableGroup", &ACoverGroup::DisableGroup)
        .def("EnableGroup", &ACoverGroup::EnableGroup)
          ;
}