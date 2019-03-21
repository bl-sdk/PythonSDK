#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_TagPayloadType()
{
    class_< UProjectileBehavior_TagPayloadType, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_TagPayloadType", no_init)
        .def_readwrite("PayloadType", &UProjectileBehavior_TagPayloadType::PayloadType)
        .def("StaticClass", &UProjectileBehavior_TagPayloadType::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_TagPayloadType::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}