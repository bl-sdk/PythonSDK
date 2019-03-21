#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneMirrorExport()
{
    py::class_< FBoneMirrorExport >("FBoneMirrorExport")
        .def_readwrite("BoneName", &FBoneMirrorExport::BoneName)
        .def_readwrite("SourceBoneName", &FBoneMirrorExport::SourceBoneName)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorExport::BoneFlipAxis)
  ;
}