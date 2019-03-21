#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimBlendInfo()
{
    py::class_< FAnimBlendInfo >("FAnimBlendInfo")
        .def_readwrite("AnimName", &FAnimBlendInfo::AnimName)
        .def_readwrite("AnimInfo", &FAnimBlendInfo::AnimInfo)
        .def_readwrite("Weight", &FAnimBlendInfo::Weight)
  ;
}