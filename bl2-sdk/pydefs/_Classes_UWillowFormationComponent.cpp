#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowFormationComponent()
{
    class_< UWillowFormationComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowFormationComponent", no_init)
        .def_readwrite("NameTag", &UWillowFormationComponent::NameTag)
        .def_readwrite("AIOwner", &UWillowFormationComponent::AIOwner)
        .def_readonly("UnknownData00", &UWillowFormationComponent::UnknownData00)
        .def("StaticClass", &UWillowFormationComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}