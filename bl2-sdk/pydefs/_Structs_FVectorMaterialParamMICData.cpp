#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorMaterialParamMICData()
{
    class_< FVectorMaterialParamMICData >("FVectorMaterialParamMICData", no_init)
        .def_readwrite("MICs", &FVectorMaterialParamMICData::MICs)
        .def_readwrite("MICResetVectors", &FVectorMaterialParamMICData::MICResetVectors)
  ;
}