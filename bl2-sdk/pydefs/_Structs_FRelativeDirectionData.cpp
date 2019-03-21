#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRelativeDirectionData()
{
    py::class_< FRelativeDirectionData >("FRelativeDirectionData")
        .def_readwrite("Direction", &FRelativeDirectionData::Direction)
        .def_readwrite("ConeAroundDirection", &FRelativeDirectionData::ConeAroundDirection)
        .def_readwrite("AdditionalRotation", &FRelativeDirectionData::AdditionalRotation)
  ;
}