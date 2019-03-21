#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorMaterialParamMICData()
{
    py::class_< FVectorMaterialParamMICData >("FVectorMaterialParamMICData")
        .def_readwrite("MICs", &FVectorMaterialParamMICData::MICs)
        .def_readwrite("MICResetVectors", &FVectorMaterialParamMICData::MICResetVectors)
  ;
}