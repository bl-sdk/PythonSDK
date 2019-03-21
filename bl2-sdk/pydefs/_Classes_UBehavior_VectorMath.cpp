#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_VectorMath()
{
    class_< UBehavior_VectorMath, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_VectorMath", no_init)
        .def_readwrite("A", &UBehavior_VectorMath::A)
        .def_readwrite("B", &UBehavior_VectorMath::B)
        .def_readwrite("Operation", &UBehavior_VectorMath::Operation)
        .def("StaticClass", &UBehavior_VectorMath::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPublishBehaviorOutput", &UBehavior_VectorMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_VectorMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}