#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATriggerStreamingLevel()
{
    class_< ATriggerStreamingLevel, bases< ATrigger >  , boost::noncopyable>("ATriggerStreamingLevel", no_init)
        .def_readwrite("Levels", &ATriggerStreamingLevel::Levels)
        .def("StaticClass", &ATriggerStreamingLevel::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTouch", &ATriggerStreamingLevel::eventTouch)
        .staticmethod("StaticClass")
  ;
}