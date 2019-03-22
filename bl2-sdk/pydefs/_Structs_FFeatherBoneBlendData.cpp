#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFeatherBoneBlendData(py::module &m)
{
    py::class_< FFeatherBoneBlendData >(m, "FFeatherBoneBlendData")
        .def_readwrite("StartBoneName", &FFeatherBoneBlendData::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendData::BlendWeight)
  ;
}