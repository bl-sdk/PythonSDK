#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAudioDevice()
{
    py::class_< UAkAudioDevice,  USubsystem   >("UAkAudioDevice")
        .def_readonly("UnknownData00", &UAkAudioDevice::UnknownData00)
        .def("StaticClass", &UAkAudioDevice::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}