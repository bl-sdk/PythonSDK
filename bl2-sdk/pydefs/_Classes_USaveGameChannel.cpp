#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USaveGameChannel(py::object m)
{
    py::class_< USaveGameChannel,  UChannel   >(m, "USaveGameChannel")
        .def_readonly("UnknownData00", &USaveGameChannel::UnknownData00)
        .def("StaticClass", &USaveGameChannel::StaticClass, py::return_value_policy::reference)
          ;
}