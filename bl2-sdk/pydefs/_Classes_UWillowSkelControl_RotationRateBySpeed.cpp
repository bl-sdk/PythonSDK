#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotationRateBySpeed()
{
    class_< UWillowSkelControl_RotationRateBySpeed, bases< UWillowSkelControl_RotationRate >  , boost::noncopyable>("UWillowSkelControl_RotationRateBySpeed", no_init)
        .def_readwrite("SpeedComponent", &UWillowSkelControl_RotationRateBySpeed::SpeedComponent)
        .def_readwrite("MinSpeed", &UWillowSkelControl_RotationRateBySpeed::MinSpeed)
        .def_readwrite("MaxSpeed", &UWillowSkelControl_RotationRateBySpeed::MaxSpeed)
        .def_readwrite("MinRotationRate", &UWillowSkelControl_RotationRateBySpeed::MinRotationRate)
        .def_readwrite("MaxRotationRate", &UWillowSkelControl_RotationRateBySpeed::MaxRotationRate)
        .def("StaticClass", &UWillowSkelControl_RotationRateBySpeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}