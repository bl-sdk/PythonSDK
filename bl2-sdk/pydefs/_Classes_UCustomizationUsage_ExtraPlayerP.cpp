#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerP()
{
    class_< UCustomizationUsage_ExtraPlayerP, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerP", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerP::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}