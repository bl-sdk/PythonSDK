#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGFxMenuLink()
{
    py::class_< FGFxMenuLink >("FGFxMenuLink")
        .def_readwrite("MenuName", &FGFxMenuLink::MenuName)
        .def_readwrite("Definition", &FGFxMenuLink::Definition)
  ;
}