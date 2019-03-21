#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UXAudio2Device()
{
    py::class_< UXAudio2Device,  UAudioDevice   >("UXAudio2Device")
        .def_readonly("UnknownData00", &UXAudio2Device::UnknownData00)
        .def("StaticClass", &UXAudio2Device::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}