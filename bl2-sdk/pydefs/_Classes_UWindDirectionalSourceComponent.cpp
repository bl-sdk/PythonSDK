#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWindDirectionalSourceComponent()
{
    class_< UWindDirectionalSourceComponent, bases< UActorComponent >  , boost::noncopyable>("UWindDirectionalSourceComponent", no_init)
        .def_readwrite("SceneProxy", &UWindDirectionalSourceComponent::SceneProxy)
        .def_readwrite("Strength", &UWindDirectionalSourceComponent::Strength)
        .def_readwrite("Phase", &UWindDirectionalSourceComponent::Phase)
        .def_readwrite("Frequency", &UWindDirectionalSourceComponent::Frequency)
        .def_readwrite("Speed", &UWindDirectionalSourceComponent::Speed)
        .def("StaticClass", &UWindDirectionalSourceComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}