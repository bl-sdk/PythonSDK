#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneMirrorExport(py::module &m)
{
    py::class_< FBoneMirrorExport >(m, "FBoneMirrorExport")
        .def_readwrite("BoneName", &FBoneMirrorExport::BoneName)
        .def_readwrite("SourceBoneName", &FBoneMirrorExport::SourceBoneName)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorExport::BoneFlipAxis)
  ;
}