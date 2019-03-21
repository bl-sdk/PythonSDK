#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetObjectParam()
{
    class_< UBehavior_GetObjectParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_GetObjectParam", no_init)
        .def("StaticClass", &UBehavior_GetObjectParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetObjectParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetObjectParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}