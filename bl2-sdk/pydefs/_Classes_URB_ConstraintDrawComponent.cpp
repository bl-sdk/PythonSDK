#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_ConstraintDrawComponent()
{
    class_< URB_ConstraintDrawComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("URB_ConstraintDrawComponent", no_init)
        .def_readwrite("LimitMaterial", &URB_ConstraintDrawComponent::LimitMaterial)
        .def("StaticClass", &URB_ConstraintDrawComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}