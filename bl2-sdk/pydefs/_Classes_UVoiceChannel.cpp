#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVoiceChannel(py::object m)
{
    py::class_< UVoiceChannel,  UChannel   >(m, "UVoiceChannel")
        .def_readonly("UnknownData00", &UVoiceChannel::UnknownData00)
        .def("StaticClass", &UVoiceChannel::StaticClass, py::return_value_policy::reference)
          ;
}