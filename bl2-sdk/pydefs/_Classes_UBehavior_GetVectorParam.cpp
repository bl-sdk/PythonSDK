#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GetVectorParam()
{
    class_< UBehavior_GetVectorParam, bases< UParameterBehaviorBase >  , boost::noncopyable>("UBehavior_GetVectorParam", no_init)
        .def("StaticClass", &UBehavior_GetVectorParam::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_GetVectorParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVectorParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}