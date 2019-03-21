#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetItemPrice()
{
    class_< UBehavior_GetItemPrice, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GetItemPrice", no_init)
        .def_readwrite("Item", &UBehavior_GetItemPrice::Item)
        .def_readwrite("Markup", &UBehavior_GetItemPrice::Markup)
        .def("StaticClass", &UBehavior_GetItemPrice::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetItemPrice::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetItemPrice::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}