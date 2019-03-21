#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectPropertyFlagValueResolver()
{
    class_< UObjectPropertyFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("UObjectPropertyFlagValueResolver", no_init)
        .def_readwrite("PropertyName", &UObjectPropertyFlagValueResolver::PropertyName)
        .def("StaticClass", &UObjectPropertyFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}