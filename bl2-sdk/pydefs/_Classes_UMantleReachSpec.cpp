#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMantleReachSpec()
{
    class_< UMantleReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("UMantleReachSpec", no_init)
        .def("StaticClass", &UMantleReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}