#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProviderRemovalRequest()
{
    py::class_< FProviderRemovalRequest >("FProviderRemovalRequest")
        .def_readwrite("ConsumerHandle", &FProviderRemovalRequest::ConsumerHandle)
        .def_readwrite("ProvidersIndex", &FProviderRemovalRequest::ProvidersIndex)
  ;
}