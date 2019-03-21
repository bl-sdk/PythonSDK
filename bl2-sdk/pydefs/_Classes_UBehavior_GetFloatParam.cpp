#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetFloatParam()
{
    class_< UBehavior_GetFloatParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_GetFloatParam", no_init)
        .def("StaticClass", &UBehavior_GetFloatParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetFloatParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetFloatParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}