#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryDataProviderElement()
{
    class_< UInventoryDataProviderElement, bases< UGFxObject >  , boost::noncopyable>("UInventoryDataProviderElement", no_init)
        .def_readwrite("Kind", &UInventoryDataProviderElement::Kind)
        .def_readwrite("LightweightIdx", &UInventoryDataProviderElement::LightweightIdx)
        .def("StaticClass", &UInventoryDataProviderElement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}