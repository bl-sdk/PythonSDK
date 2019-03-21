#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerL()
{
    class_< UCustomizationUsage_ExtraPlayerL, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerL", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerL::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}