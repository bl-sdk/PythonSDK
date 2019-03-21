#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReachSpec()
{
    class_< UReachSpec, bases< UObject >  , boost::noncopyable>("UReachSpec", no_init)
        .def_readwrite("NavOctreeObject", &UReachSpec::NavOctreeObject)
        .def_readwrite("Direction", &UReachSpec::Direction)
        .def_readwrite("BlockedBy", &UReachSpec::BlockedBy)
        .def_readwrite("MaxLandingVelocity", &UReachSpec::MaxLandingVelocity)
        .def_readwrite("Distance", &UReachSpec::Distance)
        .def_readwrite("Start", &UReachSpec::Start)
        .def_readwrite("End", &UReachSpec::End)
        .def_readwrite("CollisionRadius", &UReachSpec::CollisionRadius)
        .def_readwrite("CollisionHeight", &UReachSpec::CollisionHeight)
        .def_readwrite("reachFlags", &UReachSpec::reachFlags)
        .def_readwrite("bPruned", &UReachSpec::bPruned)
        .def_readwrite("PathColorIndex", &UReachSpec::PathColorIndex)
        .def("StaticClass", &UReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsBlockedFor", &UReachSpec::IsBlockedFor)
        .def("GetDirection", &UReachSpec::GetDirection)
        .def("GetEnd", &UReachSpec::GetEnd, return_value_policy< reference_existing_object >())
        .def("CostFor", &UReachSpec::CostFor)
        .staticmethod("StaticClass")
  ;
}