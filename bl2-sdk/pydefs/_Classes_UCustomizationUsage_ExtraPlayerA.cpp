#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerA()
{
    class_< UCustomizationUsage_ExtraPlayerA, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerA", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerA::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}