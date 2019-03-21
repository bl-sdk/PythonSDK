#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Soldier()
{
    class_< UCustomizationUsage_Soldier, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_Soldier", no_init)
        .def("StaticClass", &UCustomizationUsage_Soldier::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}