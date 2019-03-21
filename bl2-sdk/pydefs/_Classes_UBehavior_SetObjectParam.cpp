#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetObjectParam()
{
    class_< UBehavior_SetObjectParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_SetObjectParam", no_init)
        .def_readwrite("Value", &UBehavior_SetObjectParam::Value)
        .def("StaticClass", &UBehavior_SetObjectParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetObjectParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}