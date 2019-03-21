#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AssignVectorVariable()
{
    class_< UBehavior_AssignVectorVariable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AssignVectorVariable", no_init)
        .def_readwrite("Value", &UBehavior_AssignVectorVariable::Value)
        .def("StaticClass", &UBehavior_AssignVectorVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AssignVectorVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignVectorVariable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}