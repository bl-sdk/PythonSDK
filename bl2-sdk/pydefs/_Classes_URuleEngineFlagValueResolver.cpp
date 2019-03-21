#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URuleEngineFlagValueResolver()
{
    class_< URuleEngineFlagValueResolver, bases< UFlagValueResolver >  , boost::noncopyable>("URuleEngineFlagValueResolver", no_init)
        .def("StaticClass", &URuleEngineFlagValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}