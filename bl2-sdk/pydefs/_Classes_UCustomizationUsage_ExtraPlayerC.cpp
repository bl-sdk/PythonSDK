#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerC()
{
    class_< UCustomizationUsage_ExtraPlayerC, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerC", no_init)
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerC::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}