#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNetworkOptionsGFxMovie()
{
    class_< UNetworkOptionsGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UNetworkOptionsGFxMovie", no_init)
        .def_readwrite("NetworkOptionsObject", &UNetworkOptionsGFxMovie::NetworkOptionsObject)
        .def_readwrite("OwningMovie", &UNetworkOptionsGFxMovie::OwningMovie)
        .def("StaticClass", &UNetworkOptionsGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveNetworkTypeString", &UNetworkOptionsGFxMovie::ResolveNetworkTypeString)
        .def("HandleInputKey", &UNetworkOptionsGFxMovie::HandleInputKey)
        .def("extClosed", &UNetworkOptionsGFxMovie::extClosed)
        .def("extOnLoad", &UNetworkOptionsGFxMovie::extOnLoad)
        .def("eventOnClose", &UNetworkOptionsGFxMovie::eventOnClose)
        .def("eventStart", &UNetworkOptionsGFxMovie::eventStart)
        .def("OnLoad", &UNetworkOptionsGFxMovie::OnLoad)
        .staticmethod("StaticClass")
  ;
}