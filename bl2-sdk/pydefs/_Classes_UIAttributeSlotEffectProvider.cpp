#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAttributeSlotEffectProvider(py::module &m)
{
    py::class_< UIAttributeSlotEffectProvider,  UInterface   >(m, "UIAttributeSlotEffectProvider")
		.def_static("StaticClass", &UIAttributeSlotEffectProvider::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeSlotModifierValue", &UIAttributeSlotEffectProvider::GetAttributeSlotModifierValue)
        .def("GetAttributeSlotGrade", &UIAttributeSlotEffectProvider::GetAttributeSlotGrade)
          ;
}