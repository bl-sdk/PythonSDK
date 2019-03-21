#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemBalanceDefinition()
{
    class_< UItemBalanceDefinition, bases< UInventoryBalanceDefinition >  , boost::noncopyable>("UItemBalanceDefinition", no_init)
        .def_readwrite("ItemPartListCollection", &UItemBalanceDefinition::ItemPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UItemBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UItemBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}