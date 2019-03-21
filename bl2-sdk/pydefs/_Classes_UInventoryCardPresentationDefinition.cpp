#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryCardPresentationDefinition()
{
    class_< UInventoryCardPresentationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInventoryCardPresentationDefinition", no_init)
        .def_readwrite("ZippyFrame", &UInventoryCardPresentationDefinition::ZippyFrame)
        .def_readwrite("ItemFrame", &UInventoryCardPresentationDefinition::ItemFrame)
        .def_readwrite("DescriptionLocReference", &UInventoryCardPresentationDefinition::DescriptionLocReference)
        .def("StaticClass", &UInventoryCardPresentationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}