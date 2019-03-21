#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeightmapLayerAllocationInfo()
{
    class_< FWeightmapLayerAllocationInfo >("FWeightmapLayerAllocationInfo", no_init)
        .def_readwrite("LayerName", &FWeightmapLayerAllocationInfo::LayerName)
        .def_readwrite("WeightmapTextureIndex", &FWeightmapLayerAllocationInfo::WeightmapTextureIndex)
        .def_readwrite("WeightmapTextureChannel", &FWeightmapLayerAllocationInfo::WeightmapTextureChannel)
  ;
}