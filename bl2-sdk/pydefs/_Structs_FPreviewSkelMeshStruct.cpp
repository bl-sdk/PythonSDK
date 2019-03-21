#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPreviewSkelMeshStruct()
{
    class_< FPreviewSkelMeshStruct >("FPreviewSkelMeshStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewSkelMeshStruct::DisplayName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSkelMeshStruct::PreviewSkelMesh)
        .def_readwrite("PreviewMorphSets", &FPreviewSkelMeshStruct::PreviewMorphSets)
  ;
}