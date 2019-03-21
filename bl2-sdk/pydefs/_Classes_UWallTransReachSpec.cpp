#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWallTransReachSpec()
{
    class_< UWallTransReachSpec, bases< UReachSpec >  , boost::noncopyable>("UWallTransReachSpec", no_init)
        .def("StaticClass", &UWallTransReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}