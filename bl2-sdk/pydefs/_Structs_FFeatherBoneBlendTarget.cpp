#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFeatherBoneBlendTarget(py::module &m)
{
    py::class_< FFeatherBoneBlendTarget >(m, "FFeatherBoneBlendTarget")
        .def_readwrite("StartBoneName", &FFeatherBoneBlendTarget::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendTarget::BlendWeight)
  ;
}