#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFloatMaterialParamMICData(py::object m)
{
    py::class_< FFloatMaterialParamMICData >(m, "FFloatMaterialParamMICData")
        .def_readwrite("MICs", &FFloatMaterialParamMICData::MICs)
        .def_readwrite("MICResetFloats", &FFloatMaterialParamMICData::MICResetFloats)
  ;
}