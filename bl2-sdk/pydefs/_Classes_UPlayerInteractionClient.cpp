#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerInteractionClient()
{
    class_< UPlayerInteractionClient, bases< UObject >  , boost::noncopyable>("UPlayerInteractionClient", no_init)
        .def("StaticClass", &UPlayerInteractionClient::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSendMessage", &UPlayerInteractionClient::eventSendMessage)
        .def("HandleMessage", &UPlayerInteractionClient::HandleMessage)
        .def("ShutDown", &UPlayerInteractionClient::ShutDown)
        .def("Initialize", &UPlayerInteractionClient::Initialize)
        .staticmethod("StaticClass")
  ;
}