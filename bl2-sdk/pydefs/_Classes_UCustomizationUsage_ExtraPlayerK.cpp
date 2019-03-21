#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerK()
{
    class_< UCustomizationUsage_ExtraPlayerK, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerK", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerK::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}