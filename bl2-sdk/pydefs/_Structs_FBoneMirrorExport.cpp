#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoneMirrorExport()
{
    class_< FBoneMirrorExport >("FBoneMirrorExport", no_init)
        .def_readwrite("BoneName", &FBoneMirrorExport::BoneName)
        .def_readwrite("SourceBoneName", &FBoneMirrorExport::SourceBoneName)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorExport::BoneFlipAxis)
  ;
}