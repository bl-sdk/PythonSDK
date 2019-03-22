#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAmbientSound(py::module &m)
{
    py::class_< AAmbientSound,  AKeypoint   >(m, "AAmbientSound")
        .def_readwrite("AudioComponent", &AAmbientSound::AudioComponent)
          ;
}