#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeDefinitionMultiContext(py::module &m)
{
    py::class_< UAttributeDefinitionMultiContext,  UAttributeDefinitionBase   >(m, "UAttributeDefinitionMultiContext")
		.def_static("StaticClass", &UAttributeDefinitionMultiContext::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MultiContextResolver", &UAttributeDefinitionMultiContext::MultiContextResolver)
        .def("GetDescriptors", &UAttributeDefinitionMultiContext::GetDescriptors)
        .def("GetBaseValues", &UAttributeDefinitionMultiContext::GetBaseValues)
        .def("GetValues", &UAttributeDefinitionMultiContext::GetValues)
        .def("StaticGetAttributeValues", &UAttributeDefinitionMultiContext::StaticGetAttributeValues)
        .def("ResolveContexts", &UAttributeDefinitionMultiContext::ResolveContexts)
          ;
}