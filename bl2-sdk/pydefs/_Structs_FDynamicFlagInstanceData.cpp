#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDynamicFlagInstanceData()
{
    py::class_< FDynamicFlagInstanceData >("FDynamicFlagInstanceData")
        .def_readwrite("DynamicFlag", &FDynamicFlagInstanceData::DynamicFlag)
        .def_readwrite("LastEvaluatedExpressionTime", &FDynamicFlagInstanceData::LastEvaluatedExpressionTime)
  ;
}