#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAkAmbientSound()
{
    py::class_< AAkAmbientSound,  AKeypoint   >("AAkAmbientSound")
        .def_readwrite("PlayEvent", &AAkAmbientSound::PlayEvent)
        .def_readwrite("Group", &AAkAmbientSound::Group)
        .def("StaticClass", &AAkAmbientSound::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}