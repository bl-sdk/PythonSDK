#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeightmapLayerAllocationInfo()
{
    py::class_< FWeightmapLayerAllocationInfo >("FWeightmapLayerAllocationInfo")
        .def_readwrite("LayerName", &FWeightmapLayerAllocationInfo::LayerName)
        .def_readwrite("WeightmapTextureIndex", &FWeightmapLayerAllocationInfo::WeightmapTextureIndex)
        .def_readwrite("WeightmapTextureChannel", &FWeightmapLayerAllocationInfo::WeightmapTextureChannel)
  ;
}