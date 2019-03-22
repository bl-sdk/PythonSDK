#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeSlotEffectAttributeValueResolver(py::module &m)
{
    py::class_< UAttributeSlotEffectAttributeValueResolver,  UAttributeValueResolver   >(m, "UAttributeSlotEffectAttributeValueResolver")
        .def_readwrite("SlotProperty", &UAttributeSlotEffectAttributeValueResolver::SlotProperty)
        .def_readwrite("SlotName", &UAttributeSlotEffectAttributeValueResolver::SlotName)
          ;
}