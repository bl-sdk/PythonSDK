#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleMath()
{
    class_< UBehavior_SimpleMath, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SimpleMath", no_init)
        .def_readwrite("A", &UBehavior_SimpleMath::A)
        .def_readwrite("B", &UBehavior_SimpleMath::B)
        .def_readwrite("Operation", &UBehavior_SimpleMath::Operation)
        .def("StaticClass", &UBehavior_SimpleMath::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPublishBehaviorOutput", &UBehavior_SimpleMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}