#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoftBodySpecialBoneInfo(py::module &m)
{
    py::class_< FSoftBodySpecialBoneInfo >(m, "FSoftBodySpecialBoneInfo")
        .def_readwrite("BoneName", &FSoftBodySpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FSoftBodySpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FSoftBodySpecialBoneInfo::AttachedVertexIndices)
  ;
}