#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AssignBoolVariable()
{
    class_< UBehavior_AssignBoolVariable, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AssignBoolVariable", no_init)
        .def("StaticClass", &UBehavior_AssignBoolVariable::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AssignBoolVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignBoolVariable::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}