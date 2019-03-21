#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASplineActor()
{
    class_< ASplineActor, bases< AActor >  , boost::noncopyable>("ASplineActor", no_init)
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
        .def("StaticClass", &ASplineActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggleHidden", &ASplineActor::OnToggleHidden)
        .def("OnToggle", &ASplineActor::OnToggle)
        .def("GetAllConnectedSplineActors", &ASplineActor::GetAllConnectedSplineActors)
        .def("FindSplinePathTo", &ASplineActor::FindSplinePathTo)
        .def("GetBestConnectionInDirection", &ASplineActor::GetBestConnectionInDirection, return_value_policy< reference_existing_object >())
        .def("GetRandomConnection", &ASplineActor::GetRandomConnection, return_value_policy< reference_existing_object >())
        .def("BreakAllConnectionsFrom", &ASplineActor::BreakAllConnectionsFrom)
        .def("BreakAllConnections", &ASplineActor::BreakAllConnections)
        .def("BreakConnectionTo", &ASplineActor::BreakConnectionTo)
        .def("FindTargetForComponent", &ASplineActor::FindTargetForComponent, return_value_policy< reference_existing_object >())
        .def("FindSplineComponentTo", &ASplineActor::FindSplineComponentTo, return_value_policy< reference_existing_object >())
        .def("IsConnectedTo", &ASplineActor::IsConnectedTo)
        .def("AddConnectionTo", &ASplineActor::AddConnectionTo)
        .def("UpdateConnectedSplineComponents", &ASplineActor::UpdateConnectedSplineComponents)
        .def("UpdateSplineComponents", &ASplineActor::UpdateSplineComponents)
        .def("GetWorldSpaceTangent", &ASplineActor::GetWorldSpaceTangent)
        .staticmethod("StaticClass")
  ;
}