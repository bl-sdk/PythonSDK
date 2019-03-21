#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeEffectData()
{
    class_< FAttributeEffectData >("FAttributeEffectData", no_init)
        .def_readwrite("AttributeToModify", &FAttributeEffectData::AttributeToModify)
        .def_readwrite("ModifierType", &FAttributeEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeEffectData::BaseModifierValue)
  ;
}