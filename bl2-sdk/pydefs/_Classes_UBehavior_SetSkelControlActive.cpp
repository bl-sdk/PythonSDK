#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlActive()
{
    class_< UBehavior_SetSkelControlActive, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetSkelControlActive", no_init)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlActive::SkelControlName)
        .def("StaticClass", &UBehavior_SetSkelControlActive::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlActive::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}