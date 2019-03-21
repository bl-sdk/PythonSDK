#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_MoveToVehicle(py::object m)
{
    py::class_< UAction_MoveToVehicle,  UAction_Burrow   >(m, "UAction_MoveToVehicle")
        .def_readwrite("EnterDistance", &UAction_MoveToVehicle::EnterDistance)
        .def_readwrite("MyVehicle", &UAction_MoveToVehicle::MyVehicle)
        .def_readwrite("CheckRate", &UAction_MoveToVehicle::CheckRate)
        .def_readwrite("LastCheckTime", &UAction_MoveToVehicle::LastCheckTime)
        .def("StaticClass", &UAction_MoveToVehicle::StaticClass, py::return_value_policy::reference)
        .def("eventPathFind", &UAction_MoveToVehicle::eventPathFind)
        .def("CloseEnough", &UAction_MoveToVehicle::CloseEnough)
        .def("GetMyVehicle", &UAction_MoveToVehicle::GetMyVehicle)
        .def("GetEnterDistance", &UAction_MoveToVehicle::GetEnterDistance)
        .def("eventUpdate", &UAction_MoveToVehicle::eventUpdate)
        .def("eventStop", &UAction_MoveToVehicle::eventStop)
        .def("eventStart", &UAction_MoveToVehicle::eventStart)
        .def("eventCanRun", &UAction_MoveToVehicle::eventCanRun)
          ;
}