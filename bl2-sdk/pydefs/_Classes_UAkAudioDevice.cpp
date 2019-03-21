#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAudioDevice(py::object m)
{
    py::class_< UAkAudioDevice,  USubsystem   >(m, "UAkAudioDevice")
        .def_readonly("UnknownData00", &UAkAudioDevice::UnknownData00)
        .def("StaticClass", &UAkAudioDevice::StaticClass, py::return_value_policy::reference)
          ;
}