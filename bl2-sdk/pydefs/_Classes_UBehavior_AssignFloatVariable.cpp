#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AssignFloatVariable()
{
    class_< UBehavior_AssignFloatVariable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AssignFloatVariable", no_init)
        .def_readwrite("Value", &UBehavior_AssignFloatVariable::Value)
        .def("StaticClass", &UBehavior_AssignFloatVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AssignFloatVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignFloatVariable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}