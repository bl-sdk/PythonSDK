#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationType()
{
    class_< UCustomizationType, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationType", no_init)
        .def_readwrite("CustomizationTypeName", &UCustomizationType::CustomizationTypeName)
        .def_readwrite("PRICustomizationIndex", &UCustomizationType::PRICustomizationIndex)
        .def_readwrite("AssociatedCustomizationDataClass", &UCustomizationType::AssociatedCustomizationDataClass)
        .def("StaticClass", &UCustomizationType::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}