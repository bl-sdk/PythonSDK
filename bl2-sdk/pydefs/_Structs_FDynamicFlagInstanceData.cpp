#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDynamicFlagInstanceData()
{
    class_< FDynamicFlagInstanceData >("FDynamicFlagInstanceData", no_init)
        .def_readwrite("DynamicFlag", &FDynamicFlagInstanceData::DynamicFlag)
        .def_readwrite("LastEvaluatedExpressionTime", &FDynamicFlagInstanceData::LastEvaluatedExpressionTime)
  ;
}