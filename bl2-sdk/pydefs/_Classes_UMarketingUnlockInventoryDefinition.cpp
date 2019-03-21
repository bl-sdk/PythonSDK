#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMarketingUnlockInventoryDefinition()
{
    class_< UMarketingUnlockInventoryDefinition, bases< UMarketingUnlockDefinition >  , boost::noncopyable>("UMarketingUnlockInventoryDefinition", no_init)
        .def_readwrite("UnlockItems", &UMarketingUnlockInventoryDefinition::UnlockItems)
        .def("StaticClass", &UMarketingUnlockInventoryDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GenerateUnlockedItems", &UMarketingUnlockInventoryDefinition::GenerateUnlockedItems)
        .staticmethod("StaticClass")
  ;
}