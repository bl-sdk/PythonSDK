#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInteractionClient()
{
    py::class_< UPlayerInteractionClient,  UObject   >("UPlayerInteractionClient")
        .def("StaticClass", &UPlayerInteractionClient::StaticClass, py::return_value_policy::reference)
        .def("eventSendMessage", &UPlayerInteractionClient::eventSendMessage)
        .def("HandleMessage", &UPlayerInteractionClient::HandleMessage)
        .def("ShutDown", &UPlayerInteractionClient::ShutDown)
        .def("Initialize", &UPlayerInteractionClient::Initialize)
        .staticmethod("StaticClass")
  ;
}