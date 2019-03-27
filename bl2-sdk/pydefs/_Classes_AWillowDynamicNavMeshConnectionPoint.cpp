#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDynamicNavMeshConnectionPoint(py::module &m)
{
    py::class_< AWillowDynamicNavMeshConnectionPoint,  ANavigationPoint   >(m, "AWillowDynamicNavMeshConnectionPoint")
		.def_static("StaticClass", &AWillowDynamicNavMeshConnectionPoint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIGBXNavMeshSpecialMove", &AWillowDynamicNavMeshConnectionPoint::VfTable_IIGBXNavMeshSpecialMove)
        .def_readwrite("Connections", &AWillowDynamicNavMeshConnectionPoint::Connections)
        .def_readwrite("PointsThatConnectToMe", &AWillowDynamicNavMeshConnectionPoint::PointsThatConnectToMe)
        .def_readwrite("PositionOnNavMesh", &AWillowDynamicNavMeshConnectionPoint::PositionOnNavMesh)
        .def("OnToggle", &AWillowDynamicNavMeshConnectionPoint::OnToggle)
          ;
}