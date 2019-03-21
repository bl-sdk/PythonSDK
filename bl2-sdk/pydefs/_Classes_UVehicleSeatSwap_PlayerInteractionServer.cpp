#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleSeatSwap_PlayerInteractionServer()
{
    class_< UVehicleSeatSwap_PlayerInteractionServer, bases< UPlayerInteractionServer >  , boost::noncopyable>("UVehicleSeatSwap_PlayerInteractionServer", no_init)
        .def_readwrite("PlayerVehicle", &UVehicleSeatSwap_PlayerInteractionServer::PlayerVehicle)
        .def_readwrite("RequestedSeat", &UVehicleSeatSwap_PlayerInteractionServer::RequestedSeat)
        .def("StaticClass", &UVehicleSeatSwap_PlayerInteractionServer::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsValid", &UVehicleSeatSwap_PlayerInteractionServer::IsValid)
        .def("initialize", &UVehicleSeatSwap_PlayerInteractionServer::initialize)
        .def("GetClientType", &UVehicleSeatSwap_PlayerInteractionServer::GetClientType, return_value_policy< reference_existing_object >())
        .def("GetInitialMessageForPlayer", &UVehicleSeatSwap_PlayerInteractionServer::GetInitialMessageForPlayer)
        .def("HandleMessage", &UVehicleSeatSwap_PlayerInteractionServer::HandleMessage)
        .staticmethod("StaticClass")
  ;
}