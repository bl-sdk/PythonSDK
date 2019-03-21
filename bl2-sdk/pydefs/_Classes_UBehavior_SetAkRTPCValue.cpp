#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetAkRTPCValue()
{
    class_< UBehavior_SetAkRTPCValue, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetAkRTPCValue", no_init)
        .def_readwrite("RTPC", &UBehavior_SetAkRTPCValue::RTPC)
        .def_readwrite("Value", &UBehavior_SetAkRTPCValue::Value)
        .def("StaticClass", &UBehavior_SetAkRTPCValue::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetAkRTPCValue::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}