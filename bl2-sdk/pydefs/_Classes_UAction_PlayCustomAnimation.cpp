#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_PlayCustomAnimation()
{
    class_< UAction_PlayCustomAnimation, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_PlayCustomAnimation", no_init)
        .def_readwrite("SpecialMove", &UAction_PlayCustomAnimation::SpecialMove)
        .def("StaticClass", &UAction_PlayCustomAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_PlayCustomAnimation::eventStop)
        .def("eventStart", &UAction_PlayCustomAnimation::eventStart)
        .def("eventCanRun", &UAction_PlayCustomAnimation::eventCanRun)
        .staticmethod("StaticClass")
  ;
}