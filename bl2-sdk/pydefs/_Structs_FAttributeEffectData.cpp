#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeEffectData(py::module &m)
{
    py::class_< FAttributeEffectData >(m, "FAttributeEffectData")
        .def_readwrite("AttributeToModify", &FAttributeEffectData::AttributeToModify)
        .def_readwrite("ModifierType", &FAttributeEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeEffectData::BaseModifierValue)
  ;
}