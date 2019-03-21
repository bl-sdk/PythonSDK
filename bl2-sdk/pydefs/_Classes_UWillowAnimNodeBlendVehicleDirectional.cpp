#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendVehicleDirectional()
{
    class_< UWillowAnimNodeBlendVehicleDirectional, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UWillowAnimNodeBlendVehicleDirectional", no_init)
        .def_readwrite("DirDegreesPerSecond", &UWillowAnimNodeBlendVehicleDirectional::DirDegreesPerSecond)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendVehicleDirectional::BlendTime)
        .def_readwrite("DirAngle", &UWillowAnimNodeBlendVehicleDirectional::DirAngle)
        .def("StaticClass", &UWillowAnimNodeBlendVehicleDirectional::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}