#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDesignerAttributeProvider()
{
    class_< UIDesignerAttributeProvider, bases< UInterface >  , boost::noncopyable>("UIDesignerAttributeProvider", no_init)
        .def("StaticClass", &UIDesignerAttributeProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetInstancedDesignerAttribute", &UIDesignerAttributeProvider::eventGetInstancedDesignerAttribute, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}