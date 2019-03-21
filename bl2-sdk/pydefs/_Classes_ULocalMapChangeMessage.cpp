#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalMapChangeMessage()
{
    py::class_< ULocalMapChangeMessage,  UWillowLocalMessage   >("ULocalMapChangeMessage")
        .def("StaticClass", &ULocalMapChangeMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientReceive", &ULocalMapChangeMessage::ClientReceive)
        .def("GetString", &ULocalMapChangeMessage::GetString)
        .staticmethod("StaticClass")
  ;
}