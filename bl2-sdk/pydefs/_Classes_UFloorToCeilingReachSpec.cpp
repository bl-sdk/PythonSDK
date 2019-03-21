#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFloorToCeilingReachSpec()
{
    class_< UFloorToCeilingReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("UFloorToCeilingReachSpec", no_init)
        .def("StaticClass", &UFloorToCeilingReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}