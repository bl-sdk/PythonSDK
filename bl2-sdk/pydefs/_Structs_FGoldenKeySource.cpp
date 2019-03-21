#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGoldenKeySource()
{
    py::class_< FGoldenKeySource >("FGoldenKeySource")
        .def_readwrite("SourceId", &FGoldenKeySource::SourceId)
        .def_readwrite("NumKeys", &FGoldenKeySource::NumKeys)
        .def_readwrite("NumKeysSpent", &FGoldenKeySource::NumKeysSpent)
        .def_readwrite("Empty", &FGoldenKeySource::Empty)
  ;
}