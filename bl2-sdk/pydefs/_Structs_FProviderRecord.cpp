#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProviderRecord(py::module &m)
{
    py::class_< FProviderRecord >(m, "FProviderRecord")
        .def_readwrite("ProviderDefinition", &FProviderRecord::ProviderDefinition)
        .def_readwrite("ReferenceCount", &FProviderRecord::ReferenceCount)
  ;
}