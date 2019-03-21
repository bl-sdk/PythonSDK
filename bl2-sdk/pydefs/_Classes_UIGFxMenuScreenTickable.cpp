#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGFxMenuScreenTickable()
{
    py::class_< UIGFxMenuScreenTickable,  UInterface   >("UIGFxMenuScreenTickable")
        .def("StaticClass", &UIGFxMenuScreenTickable::StaticClass, py::return_value_policy::reference)
        .def("OnTick", &UIGFxMenuScreenTickable::OnTick)
        .staticmethod("StaticClass")
  ;
}