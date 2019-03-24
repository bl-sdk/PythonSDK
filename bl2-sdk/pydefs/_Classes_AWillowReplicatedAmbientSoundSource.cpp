#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedAmbientSoundSource(py::module &m)
{
    py::class_< AWillowReplicatedAmbientSoundSource,  ANote   >(m, "AWillowReplicatedAmbientSoundSource")
		.def_static("StaticClass", &AWillowReplicatedAmbientSoundSource::StaticClass, py::return_value_policy::reference)
          ;
}