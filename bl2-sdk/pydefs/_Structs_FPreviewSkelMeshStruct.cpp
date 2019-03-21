#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPreviewSkelMeshStruct(py::object m)
{
    py::class_< FPreviewSkelMeshStruct >(m, "FPreviewSkelMeshStruct")
        .def_readwrite("DisplayName", &FPreviewSkelMeshStruct::DisplayName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSkelMeshStruct::PreviewSkelMesh)
        .def_readwrite("PreviewMorphSets", &FPreviewSkelMeshStruct::PreviewMorphSets)
  ;
}