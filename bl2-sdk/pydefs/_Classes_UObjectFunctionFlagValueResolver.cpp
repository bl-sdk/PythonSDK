#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectFunctionFlagValueResolver()
{
    class_< UObjectFunctionFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("UObjectFunctionFlagValueResolver", no_init)
        .def_readwrite("CheckRate", &UObjectFunctionFlagValueResolver::CheckRate)
        .def_readwrite("FunctionCall", &UObjectFunctionFlagValueResolver::FunctionCall)
        .def("StaticClass", &UObjectFunctionFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}