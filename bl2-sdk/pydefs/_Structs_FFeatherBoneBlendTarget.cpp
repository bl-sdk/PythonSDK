#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFeatherBoneBlendTarget()
{
    class_< FFeatherBoneBlendTarget >("FFeatherBoneBlendTarget", no_init)
        .def_readwrite("StartBoneName", &FFeatherBoneBlendTarget::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendTarget::BlendWeight)
  ;
}