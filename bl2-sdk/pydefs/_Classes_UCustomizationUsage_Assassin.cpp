#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Assassin()
{
    class_< UCustomizationUsage_Assassin, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_Assassin", no_init)
        .def("StaticClass", &UCustomizationUsage_Assassin::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}