#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_BoolMath()
{
    class_< UBehavior_BoolMath, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_BoolMath", no_init)
        .def_readwrite("Operation", &UBehavior_BoolMath::Operation)
        .def("StaticClass", &UBehavior_BoolMath::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_BoolMath::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_BoolMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}