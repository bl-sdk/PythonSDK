#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDynamicNavMeshConnectionPoint()
{
    py::class_< AWillowDynamicNavMeshConnectionPoint,  ANavigationPoint   >("AWillowDynamicNavMeshConnectionPoint")
        .def_readwrite("VfTable_IIGBXNavMeshSpecialMove", &AWillowDynamicNavMeshConnectionPoint::VfTable_IIGBXNavMeshSpecialMove)
        .def_readwrite("Connections", &AWillowDynamicNavMeshConnectionPoint::Connections)
        .def_readwrite("PointsThatConnectToMe", &AWillowDynamicNavMeshConnectionPoint::PointsThatConnectToMe)
        .def_readwrite("PositionOnNavMesh", &AWillowDynamicNavMeshConnectionPoint::PositionOnNavMesh)
        .def("StaticClass", &AWillowDynamicNavMeshConnectionPoint::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AWillowDynamicNavMeshConnectionPoint::OnToggle)
        .staticmethod("StaticClass")
  ;
}