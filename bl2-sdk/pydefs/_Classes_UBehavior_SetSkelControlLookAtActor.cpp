#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlLookAtActor()
{
    class_< UBehavior_SetSkelControlLookAtActor, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetSkelControlLookAtActor", no_init)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlLookAtActor::SkelControlName)
        .def_readwrite("TargetContext", &UBehavior_SetSkelControlLookAtActor::TargetContext)
        .def_readwrite("Offset", &UBehavior_SetSkelControlLookAtActor::Offset)
        .def("StaticClass", &UBehavior_SetSkelControlLookAtActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlLookAtActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}