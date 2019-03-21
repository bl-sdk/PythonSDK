#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_MoveToVehicle()
{
    class_< UAction_MoveToVehicle, bases< UAction_Burrow >  , boost::noncopyable>("UAction_MoveToVehicle", no_init)
        .def_readwrite("EnterDistance", &UAction_MoveToVehicle::EnterDistance)
        .def_readwrite("MyVehicle", &UAction_MoveToVehicle::MyVehicle)
        .def_readwrite("CheckRate", &UAction_MoveToVehicle::CheckRate)
        .def_readwrite("LastCheckTime", &UAction_MoveToVehicle::LastCheckTime)
        .def("StaticClass", &UAction_MoveToVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPathFind", &UAction_MoveToVehicle::eventPathFind)
        .def("CloseEnough", &UAction_MoveToVehicle::CloseEnough)
        .def("GetMyVehicle", &UAction_MoveToVehicle::GetMyVehicle)
        .def("GetEnterDistance", &UAction_MoveToVehicle::GetEnterDistance)
        .def("eventUpdate", &UAction_MoveToVehicle::eventUpdate)
        .def("eventStop", &UAction_MoveToVehicle::eventStop)
        .def("eventStart", &UAction_MoveToVehicle::eventStart)
        .def("eventCanRun", &UAction_MoveToVehicle::eventCanRun)
        .staticmethod("StaticClass")
  ;
}