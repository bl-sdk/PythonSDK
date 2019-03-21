#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_GrabPickup()
{
    class_< UAction_GrabPickup, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_GrabPickup", no_init)
        .def_readwrite("CheckRadius", &UAction_GrabPickup::CheckRadius)
        .def_readwrite("PickupAnim", &UAction_GrabPickup::PickupAnim)
        .def_readwrite("GrabTimer", &UAction_GrabPickup::GrabTimer)
        .def_readwrite("CheckTime", &UAction_GrabPickup::CheckTime)
        .def_readwrite("CheckRadiusSq", &UAction_GrabPickup::CheckRadiusSq)
        .def_readwrite("LastCheckTime", &UAction_GrabPickup::LastCheckTime)
        .def_readwrite("MyPickup", &UAction_GrabPickup::MyPickup)
        .def("StaticClass", &UAction_GrabPickup::StaticClass, return_value_policy< reference_existing_object >())
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