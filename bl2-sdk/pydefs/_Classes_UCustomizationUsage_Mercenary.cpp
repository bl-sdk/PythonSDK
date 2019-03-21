#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Mercenary()
{
    class_< UCustomizationUsage_Mercenary, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_Mercenary", no_init)
        .def("StaticClass", &UCustomizationUsage_Mercenary::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}