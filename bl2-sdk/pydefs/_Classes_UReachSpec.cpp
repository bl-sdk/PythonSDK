#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReachSpec(py::module &m)
{
    py::class_< UReachSpec,  UObject   >(m, "UReachSpec")
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
        .def("IsBlockedFor", &UReachSpec::IsBlockedFor)
        .def("GetDirection", &UReachSpec::GetDirection)
        .def("GetEnd", &UReachSpec::GetEnd, py::return_value_policy::reference)
        .def("CostFor", &UReachSpec::CostFor)
          ;
}