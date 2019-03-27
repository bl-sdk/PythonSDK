#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSuspensionSound(py::module &m)
{
    py::class_< FSuspensionSound >(m, "FSuspensionSound")
        .def_readwrite("LastSuspensionTravel", &FSuspensionSound::LastSuspensionTravel)
        .def_readwrite("LastPlayTime", &FSuspensionSound::LastPlayTime)
        .def_readwrite("PlayingInfo", &FSuspensionSound::PlayingInfo)
  ;
}