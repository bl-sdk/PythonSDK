#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClient(py::object m)
{
    py::class_< UClient,  UObject   >(m, "UClient")
        .def_readonly("UnknownData00", &UClient::UnknownData00)
        .def_readwrite("MinDesiredFrameRate", &UClient::MinDesiredFrameRate)
        .def_readwrite("DisplayGamma", &UClient::DisplayGamma)
        .def_readwrite("InitialButtonRepeatDelay", &UClient::InitialButtonRepeatDelay)
        .def_readwrite("ButtonRepeatDelay", &UClient::ButtonRepeatDelay)
        .def("StaticClass", &UClient::StaticClass, py::return_value_policy::reference)
          ;
}