#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APotentialClimbWatcher()
{
    class_< APotentialClimbWatcher, bases< AInfo >  , boost::noncopyable>("APotentialClimbWatcher", no_init)
        .def("StaticClass", &APotentialClimbWatcher::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTick", &APotentialClimbWatcher::eventTick)
        .staticmethod("StaticClass")
  ;
}