#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIBlackboardComponent()
{
    class_< UWillowAIBlackboardComponent, bases< UWillowAIComponent >  , boost::noncopyable>("UWillowAIBlackboardComponent", no_init)
        .def_readwrite("Allegiance", &UWillowAIBlackboardComponent::Allegiance)
        .def("StaticClass", &UWillowAIBlackboardComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAllegiance", &UWillowAIBlackboardComponent::GetAllegiance, return_value_policy< reference_existing_object >())
        .def("GetTargets", &UWillowAIBlackboardComponent::GetTargets)
        .staticmethod("StaticClass")
  ;
}