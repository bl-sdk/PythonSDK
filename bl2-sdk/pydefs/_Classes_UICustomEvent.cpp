#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UICustomEvent()
{
    class_< UICustomEvent, bases< UInterface >  , boost::noncopyable>("UICustomEvent", no_init)
        .def("StaticClass", &UICustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRunCustomEvent", &UICustomEvent::eventRunCustomEvent)
        .staticmethod("StaticClass")
  ;
}