#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetDiscardRootMotion()
{
    class_< UBehavior_SetDiscardRootMotion, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetDiscardRootMotion", no_init)
        .def("StaticClass", &UBehavior_SetDiscardRootMotion::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetDiscardRootMotion::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}