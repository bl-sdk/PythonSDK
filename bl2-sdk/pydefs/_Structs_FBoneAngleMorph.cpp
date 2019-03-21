#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneAngleMorph(py::object m)
{
    py::class_< FBoneAngleMorph >(m, "FBoneAngleMorph")
        .def_readwrite("Angle", &FBoneAngleMorph::Angle)
        .def_readwrite("TargetWeight", &FBoneAngleMorph::TargetWeight)
  ;
}