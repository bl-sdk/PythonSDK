#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemPoolListDefinition()
{
    class_< UItemPoolListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UItemPoolListDefinition", no_init)
        .def_readwrite("ItemPoolIncludedLists", &UItemPoolListDefinition::ItemPoolIncludedLists)
        .def_readwrite("ItemPools", &UItemPoolListDefinition::ItemPools)
        .def("StaticClass", &UItemPoolListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("AddToItemPoolList", &UItemPoolListDefinition::AddToItemPoolList)
        .staticmethod("StaticClass")
  ;
}