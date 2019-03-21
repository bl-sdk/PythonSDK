#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnAnimData(py::object m)
{
    py::class_< FSpawnAnimData >(m, "FSpawnAnimData")
        .def_readwrite("Key", &FSpawnAnimData::Key)
        .def_readwrite("AnimPairs", &FSpawnAnimData::AnimPairs)
        .def_readwrite("PreviewMeshOffset", &FSpawnAnimData::PreviewMeshOffset)
        .def_readwrite("PreviewMeshScale", &FSpawnAnimData::PreviewMeshScale)
  ;
}