#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UControlChannel(py::object m)
{
    py::class_< UControlChannel,  UChannel   >(m, "UControlChannel")
        .def_readonly("UnknownData00", &UControlChannel::UnknownData00)
        .def("StaticClass", &UControlChannel::StaticClass, py::return_value_policy::reference)
          ;
}