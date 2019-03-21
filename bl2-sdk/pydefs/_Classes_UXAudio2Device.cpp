#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UXAudio2Device(py::object m)
{
    py::class_< UXAudio2Device,  UAudioDevice   >(m, "UXAudio2Device")
        .def_readonly("UnknownData00", &UXAudio2Device::UnknownData00)
        .def("StaticClass", &UXAudio2Device::StaticClass, py::return_value_policy::reference)
          ;
}