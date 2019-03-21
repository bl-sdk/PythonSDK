#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameTypePrefix()
{
    py::class_< FGameTypePrefix >("FGameTypePrefix")
        .def_readwrite("Prefix", &FGameTypePrefix::Prefix)
        .def_readwrite("GameType", &FGameTypePrefix::GameType)
        .def_readwrite("AdditionalGameTypes", &FGameTypePrefix::AdditionalGameTypes)
        .def_readwrite("ForcedObjects", &FGameTypePrefix::ForcedObjects)
  ;
}