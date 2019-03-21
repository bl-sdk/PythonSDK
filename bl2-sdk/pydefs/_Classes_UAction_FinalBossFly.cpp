#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_FinalBossFly()
{
    class_< UAction_FinalBossFly, bases< UAction_FollowPath >  , boost::noncopyable>("UAction_FinalBossFly", no_init)
        .def_readwrite("LandPerchID", &UAction_FinalBossFly::LandPerchID)
        .def_readwrite("FlightSplineName", &UAction_FinalBossFly::FlightSplineName)
        .def_readwrite("FlightSplineReverseName", &UAction_FinalBossFly::FlightSplineReverseName)
        .def_readwrite("FlightAnimNodeRName", &UAction_FinalBossFly::FlightAnimNodeRName)
        .def_readwrite("FlightAnimNodeLName", &UAction_FinalBossFly::FlightAnimNodeLName)
        .def_readwrite("FlyToPerch", &UAction_FinalBossFly::FlyToPerch)
        .def_readwrite("FlightSpline", &UAction_FinalBossFly::FlightSpline)
        .def_readwrite("MyAnimSeqR", &UAction_FinalBossFly::MyAnimSeqR)
        .def_readwrite("MyAnimSeqL", &UAction_FinalBossFly::MyAnimSeqL)
        .def("StaticClass", &UAction_FinalBossFly::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_FinalBossFly::eventStop)
        .def("eventStart", &UAction_FinalBossFly::eventStart)
        .def("eventCanRun", &UAction_FinalBossFly::eventCanRun)
        .staticmethod("StaticClass")
  ;
}