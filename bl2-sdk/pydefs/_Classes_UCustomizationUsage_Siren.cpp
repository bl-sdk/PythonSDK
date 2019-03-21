#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Siren()
{
    class_< UCustomizationUsage_Siren, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_Siren", no_init)
        .def("StaticClass", &UCustomizationUsage_Siren::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}