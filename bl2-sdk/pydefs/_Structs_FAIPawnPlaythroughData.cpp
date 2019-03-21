#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnPlaythroughData()
{
    py::class_< FAIPawnPlaythroughData >("FAIPawnPlaythroughData")
        .def_readwrite("PlayThrough", &FAIPawnPlaythroughData::PlayThrough)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughData::TransformedNames)
        .def_readwrite("OnSpawnCustomizations", &FAIPawnPlaythroughData::OnSpawnCustomizations)
        .def_readwrite("AttributeStartingValues", &FAIPawnPlaythroughData::AttributeStartingValues)
        .def_readwrite("CustomItemPoolIncludedLists", &FAIPawnPlaythroughData::CustomItemPoolIncludedLists)
        .def_readwrite("CustomItemPoolList", &FAIPawnPlaythroughData::CustomItemPoolList)
        .def_readwrite("MeshMaterial", &FAIPawnPlaythroughData::MeshMaterial)
  ;
}