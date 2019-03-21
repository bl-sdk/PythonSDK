#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClothSpecialBoneInfo(py::object m)
{
    py::class_< FClothSpecialBoneInfo >(m, "FClothSpecialBoneInfo")
        .def_readwrite("BoneName", &FClothSpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FClothSpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FClothSpecialBoneInfo::AttachedVertexIndices)
  ;
}