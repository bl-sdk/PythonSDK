#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFailedConnect()
{
    py::class_< UFailedConnect,  ULocalMessage   >("UFailedConnect")
        .def_readonly("FailMessage", &UFailedConnect::FailMessage)
        .def("StaticClass", &UFailedConnect::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UFailedConnect::GetString)
        .def("GetFailSwitch", &UFailedConnect::GetFailSwitch)
        .staticmethod("StaticClass")
  ;
}