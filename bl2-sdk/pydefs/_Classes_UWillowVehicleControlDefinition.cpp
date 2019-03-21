#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleControlDefinition()
{
    class_< UWillowVehicleControlDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowVehicleControlDefinition", no_init)
        .def_readwrite("CameraSetting", &UWillowVehicleControlDefinition::CameraSetting)
        .def_readwrite("SteeringSetting", &UWillowVehicleControlDefinition::SteeringSetting)
        .def("StaticClass", &UWillowVehicleControlDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}