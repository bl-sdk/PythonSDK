#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSeatSwap_PlayerInteractionClient(py::object m)
{
    py::class_< UVehicleSeatSwap_PlayerInteractionClient,  UPlayerInteractionClient   >(m, "UVehicleSeatSwap_PlayerInteractionClient")
        .def_readwrite("MsgTitle", &UVehicleSeatSwap_PlayerInteractionClient::MsgTitle)
        .def("StaticClass", &UVehicleSeatSwap_PlayerInteractionClient::StaticClass, py::return_value_policy::reference)
        .def("ShutDown", &UVehicleSeatSwap_PlayerInteractionClient::ShutDown)
        .def("HandleSeatSwapCommand", &UVehicleSeatSwap_PlayerInteractionClient::HandleSeatSwapCommand)
        .def("Initialize", &UVehicleSeatSwap_PlayerInteractionClient::Initialize)
          ;
}