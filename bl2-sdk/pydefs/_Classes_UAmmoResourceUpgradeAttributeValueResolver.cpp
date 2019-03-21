#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAmmoResourceUpgradeAttributeValueResolver()
{
    class_< UAmmoResourceUpgradeAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UAmmoResourceUpgradeAttributeValueResolver", no_init)
        .def_readwrite("AssociatedResource", &UAmmoResourceUpgradeAttributeValueResolver::AssociatedResource)
        .def_readwrite("AmmoResourceUpgradesArrayIndex", &UAmmoResourceUpgradeAttributeValueResolver::AmmoResourceUpgradesArrayIndex)
        .def("StaticClass", &UAmmoResourceUpgradeAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}