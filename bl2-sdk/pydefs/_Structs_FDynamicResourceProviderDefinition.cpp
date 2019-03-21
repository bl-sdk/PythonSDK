#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDynamicResourceProviderDefinition(py::object m)
{
    py::class_< FDynamicResourceProviderDefinition >(m, "FDynamicResourceProviderDefinition")
        .def_readwrite("ProviderTag", &FDynamicResourceProviderDefinition::ProviderTag)
        .def_readwrite("ProviderClassName", &FDynamicResourceProviderDefinition::ProviderClassName)
        .def_readwrite("ProviderClass", &FDynamicResourceProviderDefinition::ProviderClass)
  ;
}