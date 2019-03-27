#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDynamicFlagInstanceData(py::module &m)
{
    py::class_< FDynamicFlagInstanceData >(m, "FDynamicFlagInstanceData")
        .def_readwrite("DynamicFlag", &FDynamicFlagInstanceData::DynamicFlag)
        .def_readwrite("LastEvaluatedExpressionTime", &FDynamicFlagInstanceData::LastEvaluatedExpressionTime)
  ;
}