#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProviderRecord()
{
    py::class_< FProviderRecord >("FProviderRecord")
        .def_readwrite("ProviderDefinition", &FProviderRecord::ProviderDefinition)
        .def_readwrite("ReferenceCount", &FProviderRecord::ReferenceCount)
  ;
}