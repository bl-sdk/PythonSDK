#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeSlotEffectAttributeValueResolver()
{
    py::class_< UAttributeSlotEffectAttributeValueResolver,  UAttributeValueResolver   >("UAttributeSlotEffectAttributeValueResolver")
        .def_readwrite("SlotProperty", &UAttributeSlotEffectAttributeValueResolver::SlotProperty)
        .def_readwrite("SlotName", &UAttributeSlotEffectAttributeValueResolver::SlotName)
        .def("StaticClass", &UAttributeSlotEffectAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}