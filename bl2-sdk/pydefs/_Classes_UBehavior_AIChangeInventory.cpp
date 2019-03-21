#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIChangeInventory()
{
    class_< UBehavior_AIChangeInventory, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIChangeInventory", no_init)
        .def_readwrite("NewItemPoolList", &UBehavior_AIChangeInventory::NewItemPoolList)
        .def_readwrite("NewItemPoolIncludedLists", &UBehavior_AIChangeInventory::NewItemPoolIncludedLists)
        .def("StaticClass", &UBehavior_AIChangeInventory::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIChangeInventory::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}