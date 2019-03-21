#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneMirrorInfo()
{
    py::class_< FBoneMirrorInfo >("FBoneMirrorInfo")
        .def_readwrite("SourceIndex", &FBoneMirrorInfo::SourceIndex)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorInfo::BoneFlipAxis)
  ;
}