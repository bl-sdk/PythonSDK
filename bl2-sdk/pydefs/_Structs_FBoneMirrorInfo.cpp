#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoneMirrorInfo()
{
    class_< FBoneMirrorInfo >("FBoneMirrorInfo", no_init)
        .def_readwrite("SourceIndex", &FBoneMirrorInfo::SourceIndex)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorInfo::BoneFlipAxis)
  ;
}