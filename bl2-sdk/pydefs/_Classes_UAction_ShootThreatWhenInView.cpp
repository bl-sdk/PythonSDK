#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_ShootThreatWhenInView()
{
    class_< UAction_ShootThreatWhenInView, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_ShootThreatWhenInView", no_init)
        .def("StaticClass", &UAction_ShootThreatWhenInView::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_ShootThreatWhenInView::eventStop)
        .def("eventStart", &UAction_ShootThreatWhenInView::eventStart)
        .def("eventCanRun", &UAction_AimAtThreat::eventCanRun)
        .staticmethod("StaticClass")
  ;
}