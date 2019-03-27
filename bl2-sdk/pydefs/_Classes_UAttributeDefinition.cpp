#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeDefinition(py::module &m)
{
    py::class_< UAttributeDefinition,  UAttributeDefinitionBase   >(m, "UAttributeDefinition")
		.def_static("StaticClass", &UAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDescriptor", [](UAttributeDefinition &self , class UObject* ContextSource, class UObject* OptionalOverrideContextSource) { class UObject** pyResolvedContext = 0 ;  struct FString ret =  self.GetDescriptor(ContextSource, OptionalOverrideContextSource, pyResolvedContext); return py::make_tuple(ret, *pyResolvedContext); })
        .def("GetBaseValue", [](UAttributeDefinition &self , class UObject* ContextSource, class UObject* OptionalOverrideContextSource) { class UObject** pyResolvedContext = 0 ;  float ret =  self.GetBaseValue(ContextSource, OptionalOverrideContextSource, pyResolvedContext); return py::make_tuple(ret, *pyResolvedContext); })
        .def("GetValue", [](UAttributeDefinition &self , class UObject* ContextSource, class UObject* OptionalOverrideContextSource) { class UObject** pyResolvedContext = 0 ;  float ret =  self.GetValue(ContextSource, OptionalOverrideContextSource, pyResolvedContext); return py::make_tuple(ret, *pyResolvedContext); })
        .def("StaticGetAttributeValueOrDefault", &UAttributeDefinition::StaticGetAttributeValueOrDefault)
          ;
}