#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAmbientSound(py::module &m)
{
    py::class_< AAmbientSound,  AKeypoint   >(m, "AAmbientSound")
        .def_readwrite("AudioComponent", &AAmbientSound::AudioComponent)
        .def("StaticClass", &AAmbientSound::StaticClass, py::return_value_policy::reference)
          ;
}