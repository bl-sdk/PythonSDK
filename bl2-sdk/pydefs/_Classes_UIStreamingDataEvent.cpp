#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIStreamingDataEvent()
{
    class_< UIStreamingDataEvent, bases< UInterface >  , boost::noncopyable>("UIStreamingDataEvent", no_init)
        .def("StaticClass", &UIStreamingDataEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRunStreamingDataEvent", &UIStreamingDataEvent::eventRunStreamingDataEvent)
        .staticmethod("StaticClass")
  ;
}