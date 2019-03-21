#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPreviewSocketStruct()
{
    class_< FPreviewSocketStruct >("FPreviewSocketStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewSocketStruct::DisplayName)
        .def_readwrite("SocketName", &FPreviewSocketStruct::SocketName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSocketStruct::PreviewSkelMesh)
        .def_readwrite("PreviewStaticMesh", &FPreviewSocketStruct::PreviewStaticMesh)
  ;
}