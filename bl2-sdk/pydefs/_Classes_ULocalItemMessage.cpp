#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalItemMessage(py::module &m)
{
    py::class_< ULocalItemMessage,  UWillowLocalMessage   >(m, "ULocalItemMessage")
        .def("StaticClass", &ULocalItemMessage::StaticClass, py::return_value_policy::reference)
        .def("GetItemString", &ULocalItemMessage::GetItemString)
        .def("GetItemColor", &ULocalItemMessage::GetItemColor)
        .def("ClientItemReceive", &ULocalItemMessage::ClientItemReceive)
          ;
}