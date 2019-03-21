#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPerchEditorComponent()
{
    class_< UPerchEditorComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPerchEditorComponent", no_init)
        .def("StaticClass", &UPerchEditorComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}