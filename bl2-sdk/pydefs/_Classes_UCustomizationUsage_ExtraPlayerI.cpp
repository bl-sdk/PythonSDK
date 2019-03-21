#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerI()
{
    class_< UCustomizationUsage_ExtraPlayerI, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerI", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerI::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}