#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFeatherBoneBlendData()
{
    py::class_< FFeatherBoneBlendData >("FFeatherBoneBlendData")
        .def_readwrite("StartBoneName", &FFeatherBoneBlendData::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendData::BlendWeight)
  ;
}