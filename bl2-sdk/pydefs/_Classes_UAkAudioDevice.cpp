#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAudioDevice(py::module &m)
{
    py::class_< UAkAudioDevice,  USubsystem   >(m, "UAkAudioDevice")
        .def("StaticClass", &UAkAudioDevice::StaticClass, py::return_value_policy::reference)
          ;
}