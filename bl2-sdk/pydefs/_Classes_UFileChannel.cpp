#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFileChannel(py::object m)
{
    py::class_< UFileChannel,  UChannel   >(m, "UFileChannel")
        .def_readonly("UnknownData00", &UFileChannel::UnknownData00)
        .def("StaticClass", &UFileChannel::StaticClass, py::return_value_policy::reference)
          ;
}