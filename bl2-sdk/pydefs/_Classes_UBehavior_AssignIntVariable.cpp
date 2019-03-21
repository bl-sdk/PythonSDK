#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AssignIntVariable()
{
    class_< UBehavior_AssignIntVariable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AssignIntVariable", no_init)
        .def_readwrite("Value", &UBehavior_AssignIntVariable::Value)
        .def("StaticClass", &UBehavior_AssignIntVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AssignIntVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignIntVariable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}