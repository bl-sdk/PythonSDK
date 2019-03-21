#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIDenDefinition()
{
    class_< UWillowAIDenDefinition, bases< UAIDefinition >  , boost::noncopyable>("UWillowAIDenDefinition", no_init)
        .def_readwrite("MinEngagementTime", &UWillowAIDenDefinition::MinEngagementTime)
        .def_readwrite("MinProvokedTime", &UWillowAIDenDefinition::MinProvokedTime)
        .def("StaticClass", &UWillowAIDenDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}