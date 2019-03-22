#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PlayerSpawned(py::module &m)
{
    py::class_< USeqEvent_PlayerSpawned,  USequenceEvent   >(m, "USeqEvent_PlayerSpawned")
        .def_readwrite("SpawnPoint", &USeqEvent_PlayerSpawned::SpawnPoint)
        .def("StaticClass", &USeqEvent_PlayerSpawned::StaticClass, py::return_value_policy::reference)
          ;
}