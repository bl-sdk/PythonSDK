#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGFxWidgetBinding()
{
    py::class_< FGFxWidgetBinding >("FGFxWidgetBinding")
        .def_readwrite("WidgetName", &FGFxWidgetBinding::WidgetName)
        .def_readwrite("WidgetClass", &FGFxWidgetBinding::WidgetClass)
  ;
}