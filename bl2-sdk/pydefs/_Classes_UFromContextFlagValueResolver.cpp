#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFromContextFlagValueResolver()
{
    class_< UFromContextFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("UFromContextFlagValueResolver", no_init)
        .def_readwrite("MyFlagDef", &UFromContextFlagValueResolver::MyFlagDef)
        .def("StaticClass", &UFromContextFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}