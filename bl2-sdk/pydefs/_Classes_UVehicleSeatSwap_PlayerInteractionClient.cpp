#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleSeatSwap_PlayerInteractionClient()
{
    class_< UVehicleSeatSwap_PlayerInteractionClient, bases< UPlayerInteractionClient >  , boost::noncopyable>("UVehicleSeatSwap_PlayerInteractionClient", no_init)
        .def_readwrite("MsgTitle", &UVehicleSeatSwap_PlayerInteractionClient::MsgTitle)
        .def("StaticClass", &UVehicleSeatSwap_PlayerInteractionClient::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShutDown", &UVehicleSeatSwap_PlayerInteractionClient::ShutDown)
        .def("HandleSeatSwapCommand", &UVehicleSeatSwap_PlayerInteractionClient::HandleSeatSwapCommand)
        .def("Initialize", &UVehicleSeatSwap_PlayerInteractionClient::Initialize)
        .staticmethod("StaticClass")
  ;
}