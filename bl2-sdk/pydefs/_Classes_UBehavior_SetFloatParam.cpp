#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetFloatParam()
{
    class_< UBehavior_SetFloatParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_SetFloatParam", no_init)
        .def_readwrite("Value", &UBehavior_SetFloatParam::Value)
        .def("StaticClass", &UBehavior_SetFloatParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetFloatParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}