#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRelativeDirectionData(py::object m)
{
    py::class_< FRelativeDirectionData >(m, "FRelativeDirectionData")
        .def_readwrite("Direction", &FRelativeDirectionData::Direction)
        .def_readwrite("ConeAroundDirection", &FRelativeDirectionData::ConeAroundDirection)
        .def_readwrite("AdditionalRotation", &FRelativeDirectionData::AdditionalRotation)
  ;
}