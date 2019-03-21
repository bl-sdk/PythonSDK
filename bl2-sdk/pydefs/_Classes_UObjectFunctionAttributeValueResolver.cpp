#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectFunctionAttributeValueResolver()
{
    class_< UObjectFunctionAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UObjectFunctionAttributeValueResolver", no_init)
        .def_readwrite("FunctionCall", &UObjectFunctionAttributeValueResolver::FunctionCall)
        .def("StaticClass", &UObjectFunctionAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}