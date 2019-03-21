#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_FinalBoss()
{
    class_< UAction_FinalBoss, bases< UAction_FollowPath >  , boost::noncopyable>("UAction_FinalBoss", no_init)
        .def("StaticClass", &UAction_FinalBoss::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_FinalBoss::eventStop)
        .def("eventStart", &UAction_FinalBoss::eventStart)
        .def("eventCanRun", &UAction_FinalBoss::eventCanRun)
        .staticmethod("StaticClass")
  ;
}