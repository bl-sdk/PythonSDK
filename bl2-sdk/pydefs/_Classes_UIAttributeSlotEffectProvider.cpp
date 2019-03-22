#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeSlotEffectProvider(py::module &m)
{
    py::class_< UIAttributeSlotEffectProvider,  UInterface   >(m, "UIAttributeSlotEffectProvider")
        .def("GetAttributeSlotModifierValue", &UIAttributeSlotEffectProvider::GetAttributeSlotModifierValue)
        .def("GetAttributeSlotGrade", &UIAttributeSlotEffectProvider::GetAttributeSlotGrade)
          ;
}