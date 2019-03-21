#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Player()
{
    class_< UCustomizationUsage_Player, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationUsage_Player", no_init)
        .def_readwrite("CustomizationUsageName", &UCustomizationUsage::CustomizationUsageName)
        .def("StaticClass", &UCustomizationUsage_Player::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}