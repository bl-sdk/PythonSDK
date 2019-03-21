#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowForcedReachSpec()
{
    class_< UWillowForcedReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("UWillowForcedReachSpec", no_init)
        .def("StaticClass", &UWillowForcedReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDoSpecialMove", &UWillowForcedReachSpec::eventDoSpecialMove)
        .staticmethod("StaticClass")
  ;
}