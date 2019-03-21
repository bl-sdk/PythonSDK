#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMovementComponent()
{
    class_< UMovementComponent, bases< UActorComponent >  , boost::noncopyable>("UMovementComponent", no_init)
        .def("StaticClass", &UMovementComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("Init", &UMovementComponent::Init)
        .staticmethod("StaticClass")
  ;
}