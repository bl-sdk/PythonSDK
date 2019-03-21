#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoftBodySpecialBoneInfo()
{
    class_< FSoftBodySpecialBoneInfo >("FSoftBodySpecialBoneInfo", no_init)
        .def_readwrite("BoneName", &FSoftBodySpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FSoftBodySpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FSoftBodySpecialBoneInfo::AttachedVertexIndices)
  ;
}