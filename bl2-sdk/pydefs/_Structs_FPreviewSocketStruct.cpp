#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPreviewSocketStruct(py::module &m)
{
    py::class_< FPreviewSocketStruct >(m, "FPreviewSocketStruct")
        .def_readwrite("DisplayName", &FPreviewSocketStruct::DisplayName)
        .def_readwrite("SocketName", &FPreviewSocketStruct::SocketName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSocketStruct::PreviewSkelMesh)
        .def_readwrite("PreviewStaticMesh", &FPreviewSocketStruct::PreviewStaticMesh)
  ;
}