#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnAnimData()
{
    class_< FSpawnAnimData >("FSpawnAnimData", no_init)
        .def_readwrite("Key", &FSpawnAnimData::Key)
        .def_readwrite("AnimPairs", &FSpawnAnimData::AnimPairs)
        .def_readwrite("PreviewMeshOffset", &FSpawnAnimData::PreviewMeshOffset)
        .def_readwrite("PreviewMeshScale", &FSpawnAnimData::PreviewMeshScale)
  ;
}