#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_AimAtThreat()
{
    class_< UAction_AimAtThreat, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_AimAtThreat", no_init)
        .def("StaticClass", &UAction_AimAtThreat::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStart", &UAction_AimAtThreat::eventStart)
        .def("eventCanRun", &UAction_AimAtThreat::eventCanRun)
        .staticmethod("StaticClass")
  ;
}