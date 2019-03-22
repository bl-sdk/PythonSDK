#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTradingGFxDefinition(py::module &m)
{
    py::class_< UTradingGFxDefinition,  UWillowInventoryGFxDefinition   >(m, "UTradingGFxDefinition")
        .def("StaticClass", &UTradingGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}