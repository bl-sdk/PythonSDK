#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFloatMaterialParamMICData()
{
    class_< FFloatMaterialParamMICData >("FFloatMaterialParamMICData", no_init)
        .def_readwrite("MICs", &FFloatMaterialParamMICData::MICs)
        .def_readwrite("MICResetFloats", &FFloatMaterialParamMICData::MICResetFloats)
  ;
}