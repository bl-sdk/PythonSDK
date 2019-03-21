#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIDenComponent()
{
    class_< UWillowAIDenComponent, bases< UWillowAIComponent >  , boost::noncopyable>("UWillowAIDenComponent", no_init)
        .def_readwrite("ParentDenAI", &UWillowAIDenComponent::ParentDenAI)
        .def("StaticClass", &UWillowAIDenComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldRemoveTarget", &UWillowAIDenComponent::ShouldRemoveTarget)
        .def("FindTargetsInDen", &UWillowAIDenComponent::FindTargetsInDen)
        .def("FindTargets", &UWillowAIDenComponent::FindTargets)
        .staticmethod("StaticClass")
  ;
}