#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowSpectatorPoint()
{
    class_< AWillowSpectatorPoint, bases< ACameraActor >  , boost::noncopyable>("AWillowSpectatorPoint", no_init)
        .def("StaticClass", &AWillowSpectatorPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AWillowSpectatorPoint::eventDestroyed)
        .def("PostBeginPlay", &AWillowSpectatorPoint::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}