#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneMirrorInfo(py::module &m)
{
    py::class_< FBoneMirrorInfo >(m, "FBoneMirrorInfo")
        .def_readwrite("SourceIndex", &FBoneMirrorInfo::SourceIndex)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorInfo::BoneFlipAxis)
  ;
}