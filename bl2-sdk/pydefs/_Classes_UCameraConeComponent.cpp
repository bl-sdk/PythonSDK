#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraConeComponent()
{
    class_< UCameraConeComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UCameraConeComponent", no_init)
        .def("StaticClass", &UCameraConeComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}