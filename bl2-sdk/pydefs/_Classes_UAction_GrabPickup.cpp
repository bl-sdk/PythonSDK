#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_GrabPickup()
{
    py::class_< UAction_GrabPickup,  UWillowActionSequencePawn   >("UAction_GrabPickup")
        .def_readwrite("CheckRadius", &UAction_GrabPickup::CheckRadius)
        .def_readwrite("PickupAnim", &UAction_GrabPickup::PickupAnim)
        .def_readwrite("GrabTimer", &UAction_GrabPickup::GrabTimer)
        .def_readwrite("CheckTime", &UAction_GrabPickup::CheckTime)
        .def_readwrite("CheckRadiusSq", &UAction_GrabPickup::CheckRadiusSq)
        .def_readwrite("LastCheckTime", &UAction_GrabPickup::LastCheckTime)
        .def_readwrite("MyPickup", &UAction_GrabPickup::MyPickup)
        .def("StaticClass", &UAction_GrabPickup::StaticClass, py::return_value_policy::reference)
        .def("ActuallyPickupItem", &UAction_GrabPickup::ActuallyPickupItem)
        .def("eventPathFind", &UAction_GrabPickup::eventPathFind)
        .def("GetPathLocation", &UAction_GrabPickup::GetPathLocation)
        .def("HasPathToPickup", &UAction_GrabPickup::HasPathToPickup)
        .def("CheckPickUp", &UAction_GrabPickup::CheckPickUp)
        .def("ValidPickup", &UAction_GrabPickup::ValidPickup)
        .def("eventStart", &UAction_GrabPickup::eventStart)
        .def("eventCanRun", &UAction_GrabPickup::eventCanRun)
        .def("eventInit", &UAction_GrabPickup::eventInit)
        .staticmethod("StaticClass")
  ;
}