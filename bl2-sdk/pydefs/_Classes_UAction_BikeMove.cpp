#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_BikeMove()
{
    class_< UAction_BikeMove, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_BikeMove", no_init)
        .def_readwrite("TargetOffsets", &UAction_BikeMove::TargetOffsets)
        .def_readwrite("RecalcDestTargetMoveDist", &UAction_BikeMove::RecalcDestTargetMoveDist)
        .def_readwrite("ReachDistance", &UAction_BikeMove::ReachDistance)
        .def_readwrite("MinTravelDistance", &UAction_BikeMove::MinTravelDistance)
        .def_readwrite("Dests", &UAction_BikeMove::Dests)
        .def_readwrite("DestIdx", &UAction_BikeMove::DestIdx)
        .def_readwrite("NumFailedDests", &UAction_BikeMove::NumFailedDests)
        .def_readwrite("CachedTargetLoc", &UAction_BikeMove::CachedTargetLoc)
        .def("StaticClass", &UAction_BikeMove::StaticClass, return_value_policy< reference_existing_object >())
        .def("WantsPathFind", &UAction_BikeMove::WantsPathFind)
        .def("ShouldRecalcDests", &UAction_BikeMove::ShouldRecalcDests)
        .def("IsDestClose", &UAction_BikeMove::IsDestClose)
        .def("UnclaimMovement", &UAction_BikeMove::UnclaimMovement)
        .def("ClaimMovement", &UAction_BikeMove::ClaimMovement)
        .def("CanMove", &UAction_BikeMove::CanMove)
        .def("ResetDests", &UAction_BikeMove::ResetDests)
        .def("HasDests", &UAction_BikeMove::HasDests)
        .def("CalcDests", &UAction_BikeMove::CalcDests)
        .def("eventStop", &UAction_BikeMove::eventStop)
        .def("eventStart", &UAction_BikeMove::eventStart)
        .def("eventCanRun", &UAction_BikeMove::eventCanRun)
        .staticmethod("StaticClass")
  ;
}