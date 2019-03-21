#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_VehicleRanOver()
{
    class_< UWillowDmgSource_VehicleRanOver, bases< UWillowDamageSource >  , boost::noncopyable>("UWillowDmgSource_VehicleRanOver", no_init)
        .def("StaticClass", &UWillowDmgSource_VehicleRanOver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}