#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIUISubMenuNavigation(py::module &m)
{
    py::class_< UIUISubMenuNavigation,  UInterface   >(m, "UIUISubMenuNavigation")
        .def("ActivateLastSubMenu", &UIUISubMenuNavigation::ActivateLastSubMenu)
        .def("ActivateFirstSubMenu", &UIUISubMenuNavigation::ActivateFirstSubMenu)
          ;
}