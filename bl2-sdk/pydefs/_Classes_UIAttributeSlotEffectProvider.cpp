#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeSlotEffectProvider()
{
    py::class_< UIAttributeSlotEffectProvider,  UInterface   >("UIAttributeSlotEffectProvider")
        .def("StaticClass", &UIAttributeSlotEffectProvider::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeSlotModifierValue", &UIAttributeSlotEffectProvider::GetAttributeSlotModifierValue)
        .def("GetAttributeSlotGrade", &UIAttributeSlotEffectProvider::GetAttributeSlotGrade)
        .staticmethod("StaticClass")
  ;
}