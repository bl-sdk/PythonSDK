#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponPartListDefinition()
{
    class_< UWeaponPartListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWeaponPartListDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UWeaponPartListDefinition::VfTable_IIConstructObject)
        .def_readwrite("WeightedParts", &UWeaponPartListDefinition::WeightedParts)
        .def_readwrite("ConsolidatedAttributeInitData", &UWeaponPartListDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UWeaponPartListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}