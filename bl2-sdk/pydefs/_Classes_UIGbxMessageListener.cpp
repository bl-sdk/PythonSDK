#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGbxMessageListener()
{
    class_< UIGbxMessageListener, bases< UInterface >  , boost::noncopyable>("UIGbxMessageListener", no_init)
        .def("StaticClass", &UIGbxMessageListener::StaticClass, return_value_policy< reference_existing_object >())
        .def("WantsToStopListening", &UIGbxMessageListener::WantsToStopListening)
        .def("GetActor", &UIGbxMessageListener::GetActor, return_value_policy< reference_existing_object >())
        .def("GetListenerLocation", &UIGbxMessageListener::GetListenerLocation)
        .def("GetAllegiance", &UIGbxMessageListener::GetAllegiance, return_value_policy< reference_existing_object >())
        .def("ReceiveMessage", &UIGbxMessageListener::ReceiveMessage)
        .def("CaresAboutMessage", &UIGbxMessageListener::CaresAboutMessage)
        .staticmethod("StaticClass")
  ;
}