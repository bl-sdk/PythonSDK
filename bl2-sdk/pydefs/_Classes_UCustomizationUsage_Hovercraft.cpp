#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Hovercraft()
{
    class_< UCustomizationUsage_Hovercraft, bases< UCustomizationUsage_Vehicle >  , boost::noncopyable>("UCustomizationUsage_Hovercraft", no_init)
        .def("StaticClass", &UCustomizationUsage_Hovercraft::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}