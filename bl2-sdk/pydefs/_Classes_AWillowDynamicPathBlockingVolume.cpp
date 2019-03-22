#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDynamicPathBlockingVolume(py::module &m)
{
    py::class_< AWillowDynamicPathBlockingVolume,  AVolume   >(m, "AWillowDynamicPathBlockingVolume")
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &AWillowDynamicPathBlockingVolume::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockedAllegiances", &AWillowDynamicPathBlockingVolume::BlockedAllegiances)
        .def("StaticClass", &AWillowDynamicPathBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AWillowDynamicPathBlockingVolume::OnToggle)
          ;
}