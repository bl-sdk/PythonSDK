#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClothSpecialBoneInfo()
{
    class_< FClothSpecialBoneInfo >("FClothSpecialBoneInfo", no_init)
        .def_readwrite("BoneName", &FClothSpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FClothSpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FClothSpecialBoneInfo::AttachedVertexIndices)
  ;
}