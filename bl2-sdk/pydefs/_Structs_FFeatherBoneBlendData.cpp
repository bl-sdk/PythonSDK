#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFeatherBoneBlendData()
{
    class_< FFeatherBoneBlendData >("FFeatherBoneBlendData", no_init)
        .def_readwrite("StartBoneName", &FFeatherBoneBlendData::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendData::BlendWeight)
  ;
}