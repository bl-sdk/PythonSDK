#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_MakeVector()
{
    class_< UBehavior_MakeVector, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_MakeVector", no_init)
        .def_readwrite("X", &UBehavior_MakeVector::X)
        .def_readwrite("Y", &UBehavior_MakeVector::Y)
        .def_readwrite("Z", &UBehavior_MakeVector::Z)
        .def("StaticClass", &UBehavior_MakeVector::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPublishBehaviorOutput", &UBehavior_MakeVector::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_MakeVector::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}