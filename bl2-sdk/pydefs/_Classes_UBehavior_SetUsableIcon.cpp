#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsableIcon()
{
    class_< UBehavior_SetUsableIcon, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetUsableIcon", no_init)
        .def_readwrite("Icon", &UBehavior_SetUsableIcon::Icon)
        .def_readwrite("UsabilityType", &UBehavior_SetUsableIcon::UsabilityType)
        .def("StaticClass", &UBehavior_SetUsableIcon::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetUsableIcon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}