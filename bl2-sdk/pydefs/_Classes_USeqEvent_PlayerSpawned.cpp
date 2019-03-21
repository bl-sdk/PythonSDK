#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PlayerSpawned()
{
    py::class_< USeqEvent_PlayerSpawned,  USequenceEvent   >("USeqEvent_PlayerSpawned")
        .def_readwrite("SpawnPoint", &USeqEvent_PlayerSpawned::SpawnPoint)
        .def("StaticClass", &USeqEvent_PlayerSpawned::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}