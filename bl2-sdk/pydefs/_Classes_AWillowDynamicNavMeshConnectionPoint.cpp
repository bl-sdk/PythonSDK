#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowDynamicNavMeshConnectionPoint()
{
    class_< AWillowDynamicNavMeshConnectionPoint, bases< ANavigationPoint >  , boost::noncopyable>("AWillowDynamicNavMeshConnectionPoint", no_init)
        .def_readwrite("VfTable_IIGBXNavMeshSpecialMove", &AWillowDynamicNavMeshConnectionPoint::VfTable_IIGBXNavMeshSpecialMove)
        .def_readwrite("Connections", &AWillowDynamicNavMeshConnectionPoint::Connections)
        .def_readwrite("PointsThatConnectToMe", &AWillowDynamicNavMeshConnectionPoint::PointsThatConnectToMe)
        .def_readwrite("PositionOnNavMesh", &AWillowDynamicNavMeshConnectionPoint::PositionOnNavMesh)
        .def("StaticClass", &AWillowDynamicNavMeshConnectionPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AWillowDynamicNavMeshConnectionPoint::OnToggle)
        .staticmethod("StaticClass")
  ;
}