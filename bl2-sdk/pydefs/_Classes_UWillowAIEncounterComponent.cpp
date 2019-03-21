#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIEncounterComponent()
{
    class_< UWillowAIEncounterComponent, bases< UWillowAIDenComponent >  , boost::noncopyable>("UWillowAIEncounterComponent", no_init)
        .def("StaticClass", &UWillowAIEncounterComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}