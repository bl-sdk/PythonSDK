#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProviderRemovalRequest(py::module &m)
{
    py::class_< FProviderRemovalRequest >(m, "FProviderRemovalRequest")
        .def_readwrite("ConsumerHandle", &FProviderRemovalRequest::ConsumerHandle)
        .def_readwrite("ProvidersIndex", &FProviderRemovalRequest::ProvidersIndex)
  ;
}