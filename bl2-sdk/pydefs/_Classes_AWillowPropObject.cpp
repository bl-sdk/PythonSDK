#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowPropObject()
{
    class_< AWillowPropObject, bases< AWillowInteractiveObject >  , boost::noncopyable>("AWillowPropObject", no_init)
        .def("StaticClass", &AWillowPropObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("PostBeginPlay", &AWillowPropObject::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}