#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FModifierValuePresentationData()
{
    class_< FModifierValuePresentationData >("FModifierValuePresentationData", no_init)
        .def_readwrite("AttributePresentation", &FModifierValuePresentationData::AttributePresentation)
        .def_readwrite("OptionalConstraintPresentation", &FModifierValuePresentationData::OptionalConstraintPresentation)
        .def_readwrite("ModifierValue", &FModifierValuePresentationData::ModifierValue)
  ;
}