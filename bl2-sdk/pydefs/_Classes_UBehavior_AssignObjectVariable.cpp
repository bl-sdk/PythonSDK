#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AssignObjectVariable()
{
    class_< UBehavior_AssignObjectVariable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AssignObjectVariable", no_init)
        .def_readwrite("Value", &UBehavior_AssignObjectVariable::Value)
        .def("StaticClass", &UBehavior_AssignObjectVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AssignObjectVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignObjectVariable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}