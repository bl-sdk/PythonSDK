#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOptionAreaData(py::object m)
{
    py::class_< FPopulationOptionAreaData >(m, "FPopulationOptionAreaData")
        .def_readwrite("ExpressionDef", &FPopulationOptionAreaData::ExpressionDef)
        .def_readwrite("PopulationDefinitions", &FPopulationOptionAreaData::PopulationDefinitions)
  ;
}