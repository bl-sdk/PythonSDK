#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointEditorComponent()
{
    class_< UWillowPopulationPointEditorComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowPopulationPointEditorComponent", no_init)
        .def("StaticClass", &UWillowPopulationPointEditorComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}