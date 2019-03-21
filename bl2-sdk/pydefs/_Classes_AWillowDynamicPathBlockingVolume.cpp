#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDynamicPathBlockingVolume()
{
    py::class_< AWillowDynamicPathBlockingVolume,  AVolume   >("AWillowDynamicPathBlockingVolume")
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &AWillowDynamicPathBlockingVolume::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockedAllegiances", &AWillowDynamicPathBlockingVolume::BlockedAllegiances)
        .def("StaticClass", &AWillowDynamicPathBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AWillowDynamicPathBlockingVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}