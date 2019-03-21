#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEmoteDefinition()
{
    py::class_< UWillowDialogEmoteDefinition,  UGBXDefinition   >("UWillowDialogEmoteDefinition")
        .def("StaticClass", &UWillowDialogEmoteDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}