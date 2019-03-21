#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVoiceChannel()
{
    py::class_< UVoiceChannel,  UChannel   >("UVoiceChannel")
        .def_readonly("UnknownData00", &UVoiceChannel::UnknownData00)
        .def("StaticClass", &UVoiceChannel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}