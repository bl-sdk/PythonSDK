#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorMaterialParamMICData(py::object m)
{
    py::class_< FVectorMaterialParamMICData >(m, "FVectorMaterialParamMICData")
        .def_readwrite("MICs", &FVectorMaterialParamMICData::MICs)
        .def_readwrite("MICResetVectors", &FVectorMaterialParamMICData::MICResetVectors)
  ;
}