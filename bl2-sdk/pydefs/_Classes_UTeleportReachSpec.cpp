#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTeleportReachSpec()
{
    class_< UTeleportReachSpec, bases< UReachSpec >  , boost::noncopyable>("UTeleportReachSpec", no_init)
        .def("StaticClass", &UTeleportReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}