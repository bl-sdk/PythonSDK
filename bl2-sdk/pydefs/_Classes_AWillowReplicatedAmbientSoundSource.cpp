#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedAmbientSoundSource()
{
    py::class_< AWillowReplicatedAmbientSoundSource,  ANote   >("AWillowReplicatedAmbientSoundSource")
        .def("StaticClass", &AWillowReplicatedAmbientSoundSource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}