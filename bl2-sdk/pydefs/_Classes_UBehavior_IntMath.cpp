#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IntMath()
{
    class_< UBehavior_IntMath, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IntMath", no_init)
        .def_readwrite("A", &UBehavior_IntMath::A)
        .def_readwrite("B", &UBehavior_IntMath::B)
        .def_readwrite("Operation", &UBehavior_IntMath::Operation)
        .def("StaticClass", &UBehavior_IntMath::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPublishBehaviorOutput", &UBehavior_IntMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_IntMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}