#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFloatMaterialParamMICData()
{
    py::class_< FFloatMaterialParamMICData >("FFloatMaterialParamMICData")
        .def_readwrite("MICs", &FFloatMaterialParamMICData::MICs)
        .def_readwrite("MICResetFloats", &FFloatMaterialParamMICData::MICResetFloats)
  ;
}