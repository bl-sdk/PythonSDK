#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSeatSwap_PlayerInteractionServer(py::module &m)
{
    py::class_< UVehicleSeatSwap_PlayerInteractionServer,  UPlayerInteractionServer   >(m, "UVehicleSeatSwap_PlayerInteractionServer")
        .def_readwrite("PlayerVehicle", &UVehicleSeatSwap_PlayerInteractionServer::PlayerVehicle)
        .def_readwrite("RequestedSeat", &UVehicleSeatSwap_PlayerInteractionServer::RequestedSeat)
        .def("StaticClass", &UVehicleSeatSwap_PlayerInteractionServer::StaticClass, py::return_value_policy::reference)
        .def("IsValid", &UVehicleSeatSwap_PlayerInteractionServer::IsValid)
        .def("initialize", &UVehicleSeatSwap_PlayerInteractionServer::initialize)
        .def("GetClientType", &UVehicleSeatSwap_PlayerInteractionServer::GetClientType, py::return_value_policy::reference)
        .def("GetInitialMessageForPlayer", &UVehicleSeatSwap_PlayerInteractionServer::GetInitialMessageForPlayer)
        .def("HandleMessage", &UVehicleSeatSwap_PlayerInteractionServer::HandleMessage)
          ;
}