#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneAngleMorph()
{
    py::class_< FBoneAngleMorph >("FBoneAngleMorph")
        .def_readwrite("Angle", &FBoneAngleMorph::Angle)
        .def_readwrite("TargetWeight", &FBoneAngleMorph::TargetWeight)
  ;
}