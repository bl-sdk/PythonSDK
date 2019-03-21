#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetworkOptionsGFxMovie(py::object m)
{
    py::class_< UNetworkOptionsGFxMovie,  UWillowGFxMovie   >(m, "UNetworkOptionsGFxMovie")
        .def_readwrite("NetworkOptionsObject", &UNetworkOptionsGFxMovie::NetworkOptionsObject)
        .def_readwrite("OwningMovie", &UNetworkOptionsGFxMovie::OwningMovie)
        .def("StaticClass", &UNetworkOptionsGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("ResolveNetworkTypeString", &UNetworkOptionsGFxMovie::ResolveNetworkTypeString)
        .def("HandleInputKey", &UNetworkOptionsGFxMovie::HandleInputKey)
        .def("extClosed", &UNetworkOptionsGFxMovie::extClosed)
        .def("extOnLoad", &UNetworkOptionsGFxMovie::extOnLoad)
        .def("eventOnClose", &UNetworkOptionsGFxMovie::eventOnClose)
        .def("eventStart", &UNetworkOptionsGFxMovie::eventStart)
        .def("OnLoad", &UNetworkOptionsGFxMovie::OnLoad)
          ;
}