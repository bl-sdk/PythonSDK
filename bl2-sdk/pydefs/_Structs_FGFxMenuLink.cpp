#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGFxMenuLink(py::object m)
{
    py::class_< FGFxMenuLink >(m, "FGFxMenuLink")
        .def_readwrite("MenuName", &FGFxMenuLink::MenuName)
        .def_readwrite("Definition", &FGFxMenuLink::Definition)
  ;
}