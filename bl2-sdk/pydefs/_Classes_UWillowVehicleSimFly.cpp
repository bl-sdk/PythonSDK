#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimFly()
{
    class_< UWillowVehicleSimFly, bases< USVehicleSimBase >  , boost::noncopyable>("UWillowVehicleSimFly", no_init)
        .def_readwrite("RiseSpeed", &UWillowVehicleSimFly::RiseSpeed)
        .def_readwrite("MoveSpeed", &UWillowVehicleSimFly::MoveSpeed)
        .def("StaticClass", &UWillowVehicleSimFly::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}