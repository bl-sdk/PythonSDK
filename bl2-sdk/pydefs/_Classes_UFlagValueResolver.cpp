#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFlagValueResolver()
{
    class_< UFlagValueResolver, bases< UObject >  , boost::noncopyable>("UFlagValueResolver", no_init)
        .def("StaticClass", &UFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}