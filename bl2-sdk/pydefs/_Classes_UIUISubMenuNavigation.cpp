#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIUISubMenuNavigation(py::module &m)
{
    py::class_< UIUISubMenuNavigation,  UInterface   >(m, "UIUISubMenuNavigation")
        .def("StaticClass", &UIUISubMenuNavigation::StaticClass, py::return_value_policy::reference)
        .def("ActivateLastSubMenu", &UIUISubMenuNavigation::ActivateLastSubMenu)
        .def("ActivateFirstSubMenu", &UIUISubMenuNavigation::ActivateFirstSubMenu)
          ;
}