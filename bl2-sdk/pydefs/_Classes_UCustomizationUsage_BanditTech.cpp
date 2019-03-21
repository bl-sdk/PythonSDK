#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_BanditTech()
{
    class_< UCustomizationUsage_BanditTech, bases< UCustomizationUsage_Vehicle >  , boost::noncopyable>("UCustomizationUsage_BanditTech", no_init)
        .def("StaticClass", &UCustomizationUsage_BanditTech::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}