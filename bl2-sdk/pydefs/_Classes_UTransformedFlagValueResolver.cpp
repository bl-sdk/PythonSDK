#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTransformedFlagValueResolver()
{
    class_< UTransformedFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("UTransformedFlagValueResolver", no_init)
        .def_readwrite("Transform", &UTransformedFlagValueResolver::Transform)
        .def("StaticClass", &UTransformedFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}