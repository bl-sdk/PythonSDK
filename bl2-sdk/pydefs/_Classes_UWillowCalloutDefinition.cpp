#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowCalloutDefinition()
{
    class_< UWillowCalloutDefinition, bases< UGearboxCalloutDefinition >  , boost::noncopyable>("UWillowCalloutDefinition", no_init)
        .def_readwrite("DialogEvent", &UWillowCalloutDefinition::DialogEvent)
        .def("StaticClass", &UWillowCalloutDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}