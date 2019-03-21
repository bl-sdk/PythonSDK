#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeightmapLayerAllocationInfo(py::object m)
{
    py::class_< FWeightmapLayerAllocationInfo >(m, "FWeightmapLayerAllocationInfo")
        .def_readwrite("LayerName", &FWeightmapLayerAllocationInfo::LayerName)
        .def_readwrite("WeightmapTextureIndex", &FWeightmapLayerAllocationInfo::WeightmapTextureIndex)
        .def_readwrite("WeightmapTextureChannel", &FWeightmapLayerAllocationInfo::WeightmapTextureChannel)
  ;
}