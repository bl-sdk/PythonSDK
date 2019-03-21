#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIUISubMenuNavigation()
{
    py::class_< UIUISubMenuNavigation,  UInterface   >("UIUISubMenuNavigation")
        .def("StaticClass", &UIUISubMenuNavigation::StaticClass, py::return_value_policy::reference)
        .def("ActivateLastSubMenu", &UIUISubMenuNavigation::ActivateLastSubMenu)
        .def("ActivateFirstSubMenu", &UIUISubMenuNavigation::ActivateFirstSubMenu)
        .staticmethod("StaticClass")
  ;
}