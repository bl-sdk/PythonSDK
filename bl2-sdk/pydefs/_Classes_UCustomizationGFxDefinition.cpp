#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationGFxDefinition()
{
    class_< UCustomizationGFxDefinition, bases< UWillowGFxThirdPersonDefinition >  , boost::noncopyable>("UCustomizationGFxDefinition", no_init)
        .def("StaticClass", &UCustomizationGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}