#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTradingGFxDefinition(py::module &m)
{
    py::class_< UTradingGFxDefinition,  UWillowInventoryGFxDefinition   >(m, "UTradingGFxDefinition")
          ;
}