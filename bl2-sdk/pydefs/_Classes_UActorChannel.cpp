#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorChannel(py::object m)
{
    py::class_< UActorChannel,  UChannel   >(m, "UActorChannel")
        .def_readonly("UnknownData00", &UActorChannel::UnknownData00)
        .def("StaticClass", &UActorChannel::StaticClass, py::return_value_policy::reference)
          ;
}