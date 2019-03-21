#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInteractionClient(py::object m)
{
    py::class_< UPlayerInteractionClient,  UObject   >(m, "UPlayerInteractionClient")
        .def("StaticClass", &UPlayerInteractionClient::StaticClass, py::return_value_policy::reference)
        .def("eventSendMessage", &UPlayerInteractionClient::eventSendMessage)
        .def("HandleMessage", &UPlayerInteractionClient::HandleMessage)
        .def("ShutDown", &UPlayerInteractionClient::ShutDown)
        .def("Initialize", &UPlayerInteractionClient::Initialize)
          ;
}