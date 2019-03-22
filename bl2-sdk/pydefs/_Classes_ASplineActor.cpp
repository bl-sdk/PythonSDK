#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASplineActor(py::module &m)
{
    py::class_< ASplineActor,  AActor   >(m, "ASplineActor")
        .def_readwrite("Connections", &ASplineActor::Connections)
        .def_readwrite("SplineActorTangent", &ASplineActor::SplineActorTangent)
        .def_readwrite("SplineColor", &ASplineActor::SplineColor)
        .def_readwrite("LinksFrom", &ASplineActor::LinksFrom)
        .def_readwrite("nextOrdered", &ASplineActor::nextOrdered)
        .def_readwrite("prevOrdered", &ASplineActor::prevOrdered)
        .def_readwrite("previousPath", &ASplineActor::previousPath)
        .def_readwrite("bestPathWeight", &ASplineActor::bestPathWeight)
        .def_readwrite("visitedWeight", &ASplineActor::visitedWeight)
        .def_readwrite("SplineVelocityOverTime", &ASplineActor::SplineVelocityOverTime)
        .def("OnToggleHidden", &ASplineActor::OnToggleHidden)
        .def("OnToggle", &ASplineActor::OnToggle)
        .def("GetAllConnectedSplineActors", &ASplineActor::GetAllConnectedSplineActors)
        .def("FindSplinePathTo", &ASplineActor::FindSplinePathTo)
        .def("GetBestConnectionInDirection", &ASplineActor::GetBestConnectionInDirection, py::return_value_policy::reference)
        .def("GetRandomConnection", &ASplineActor::GetRandomConnection, py::return_value_policy::reference)
        .def("BreakAllConnectionsFrom", &ASplineActor::BreakAllConnectionsFrom)
        .def("BreakAllConnections", &ASplineActor::BreakAllConnections)
        .def("BreakConnectionTo", &ASplineActor::BreakConnectionTo)
        .def("FindTargetForComponent", &ASplineActor::FindTargetForComponent, py::return_value_policy::reference)
        .def("FindSplineComponentTo", &ASplineActor::FindSplineComponentTo, py::return_value_policy::reference)
        .def("IsConnectedTo", &ASplineActor::IsConnectedTo)
        .def("AddConnectionTo", &ASplineActor::AddConnectionTo)
        .def("UpdateConnectedSplineComponents", &ASplineActor::UpdateConnectedSplineComponents)
        .def("UpdateSplineComponents", &ASplineActor::UpdateSplineComponents)
        .def("GetWorldSpaceTangent", &ASplineActor::GetWorldSpaceTangent)
          ;
}