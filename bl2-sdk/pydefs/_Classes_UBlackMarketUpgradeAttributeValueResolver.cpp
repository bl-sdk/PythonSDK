#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeAttributeValueResolver()
{
    class_< UBlackMarketUpgradeAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UBlackMarketUpgradeAttributeValueResolver", no_init)
        .def_readwrite("AssociatedBlackMarketUpgrade", &UBlackMarketUpgradeAttributeValueResolver::AssociatedBlackMarketUpgrade)
        .def("StaticClass", &UBlackMarketUpgradeAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}