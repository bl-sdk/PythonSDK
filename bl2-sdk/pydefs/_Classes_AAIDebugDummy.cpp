#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAIDebugDummy()
{
    class_< AAIDebugDummy, bases< AAIDebugDummyBase >  , boost::noncopyable>("AAIDebugDummy", no_init)
        .def("StaticClass", &AAIDebugDummy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}