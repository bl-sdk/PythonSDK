#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoneAngleMorph()
{
    class_< FBoneAngleMorph >("FBoneAngleMorph", no_init)
        .def_readwrite("Angle", &FBoneAngleMorph::Angle)
        .def_readwrite("TargetWeight", &FBoneAngleMorph::TargetWeight)
  ;
}