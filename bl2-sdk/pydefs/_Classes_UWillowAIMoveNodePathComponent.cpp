#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAIMoveNodePathComponent()
{
    class_< UWillowAIMoveNodePathComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowAIMoveNodePathComponent", no_init)
        .def("StaticClass", &UWillowAIMoveNodePathComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}