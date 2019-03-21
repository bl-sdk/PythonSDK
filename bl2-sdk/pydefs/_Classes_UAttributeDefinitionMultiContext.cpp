#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeDefinitionMultiContext()
{
    py::class_< UAttributeDefinitionMultiContext,  UAttributeDefinitionBase   >("UAttributeDefinitionMultiContext")
        .def_readwrite("MultiContextResolver", &UAttributeDefinitionMultiContext::MultiContextResolver)
        .def("StaticClass", &UAttributeDefinitionMultiContext::StaticClass, py::return_value_policy::reference)
        .def("GetDescriptors", &UAttributeDefinitionMultiContext::GetDescriptors)
        .def("GetBaseValues", &UAttributeDefinitionMultiContext::GetBaseValues)
        .def("GetValues", &UAttributeDefinitionMultiContext::GetValues)
        .def("StaticGetAttributeValues", &UAttributeDefinitionMultiContext::StaticGetAttributeValues)
        .def("ResolveContexts", &UAttributeDefinitionMultiContext::ResolveContexts)
        .staticmethod("StaticClass")
  ;
}