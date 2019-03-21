#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeDefinition()
{
    py::class_< UAttributeDefinition,  UAttributeDefinitionBase   >("UAttributeDefinition")
        .def("StaticClass", &UAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDescriptor", &UAttributeDefinition::GetDescriptor)
        .def("GetBaseValue", &UAttributeDefinition::GetBaseValue)
        .def("GetValue", &UAttributeDefinition::GetValue)
        .def("StaticGetAttributeValueOrDefault", &UAttributeDefinition::StaticGetAttributeValueOrDefault)
        .staticmethod("StaticClass")
  ;
}