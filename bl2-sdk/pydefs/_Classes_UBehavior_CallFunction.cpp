#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CallFunction()
{
    class_< UBehavior_CallFunction, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CallFunction", no_init)
        .def_readwrite("FunctionName", &UBehavior_CallFunction::FunctionName)
        .def("StaticClass", &UBehavior_CallFunction::StaticClass, return_value_policy< reference_existing_object >())
        .def("CallFunction", &UBehavior_CallFunction::CallFunction)
        .def("ApplyBehaviorToContext", &UBehavior_CallFunction::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}