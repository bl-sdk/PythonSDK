#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerB()
{
    class_< UCustomizationUsage_ExtraPlayerB, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerB", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerB::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}