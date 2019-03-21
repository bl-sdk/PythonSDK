#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPickupMessage()
{
    py::class_< UWillowPickupMessage,  UWillowLocalMessage   >("UWillowPickupMessage")
        .def("StaticClass", &UWillowPickupMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UWillowPickupMessage::GetString)
        .def("ClientReceive", &UWillowPickupMessage::ClientReceive)
        .staticmethod("StaticClass")
  ;
}