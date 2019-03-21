#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PostAkEvent()
{
    class_< UBehavior_PostAkEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PostAkEvent", no_init)
        .def_readwrite("Event", &UBehavior_PostAkEvent::Event)
        .def_readwrite("PlayingInfo", &UBehavior_PostAkEvent::PlayingInfo)
        .def("StaticClass", &UBehavior_PostAkEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PostAkEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}