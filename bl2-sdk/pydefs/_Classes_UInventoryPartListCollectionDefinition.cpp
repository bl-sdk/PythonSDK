#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryPartListCollectionDefinition()
{
    class_< UInventoryPartListCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInventoryPartListCollectionDefinition", no_init)
        .def_readwrite("PartReplacementMode", &UInventoryPartListCollectionDefinition::PartReplacementMode)
        .def_readwrite("ConsolidatedAttributeInitData", &UInventoryPartListCollectionDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UInventoryPartListCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}