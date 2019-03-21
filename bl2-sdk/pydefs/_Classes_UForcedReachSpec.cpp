#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UForcedReachSpec()
{
    class_< UForcedReachSpec, bases< UReachSpec >  , boost::noncopyable>("UForcedReachSpec", no_init)
        .def("StaticClass", &UForcedReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}