#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTradingGFxDefinition()
{
    py::class_< UTradingGFxDefinition,  UWillowInventoryGFxDefinition   >("UTradingGFxDefinition")
        .def("StaticClass", &UTradingGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}