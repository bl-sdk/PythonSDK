#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLookAxisDefinitionData(py::module &m)
{
    py::class_< FLookAxisDefinitionData >(m, "FLookAxisDefinitionData")
        .def_readwrite("Horizontal", &FLookAxisDefinitionData::Horizontal)
        .def_readwrite("Vertical", &FLookAxisDefinitionData::Vertical)
  ;
}