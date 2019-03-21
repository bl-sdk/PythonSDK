#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchOrigin_TargetLocation()
{
    class_< USearchOrigin_TargetLocation, bases< USearchOrigin >  , boost::noncopyable>("USearchOrigin_TargetLocation", no_init)
        .def("StaticClass", &USearchOrigin_TargetLocation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}