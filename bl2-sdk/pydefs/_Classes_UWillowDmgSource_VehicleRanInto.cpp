#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanInto()
{
    class_< UWillowDmgSource_VehicleRanInto, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_VehicleRanInto", no_init)
        .def("StaticClass", &UWillowDmgSource_VehicleRanInto::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}