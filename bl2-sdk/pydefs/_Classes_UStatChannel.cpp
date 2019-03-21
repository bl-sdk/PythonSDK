#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatChannel(py::object m)
{
    py::class_< UStatChannel,  UChannel   >(m, "UStatChannel")
        .def_readonly("UnknownData00", &UStatChannel::UnknownData00)
        .def("StaticClass", &UStatChannel::StaticClass, py::return_value_policy::reference)
          ;
}