#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage()
{
    class_< UCustomizationUsage, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationUsage", no_init)
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}