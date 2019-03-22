#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PopulatedActor(py::module &m)
{
    py::class_< USeqEvent_PopulatedActor,  USequenceEvent   >(m, "USeqEvent_PopulatedActor")
        .def_readwrite("DestPopulationOpportunity", &USeqEvent_PopulatedActor::DestPopulationOpportunity)
        .def_readwrite("SpawnPoint", &USeqEvent_PopulatedActor::SpawnPoint)
        .def("StaticClass", &USeqEvent_PopulatedActor::StaticClass, py::return_value_policy::reference)
        .def("eventNotifyPopulatedActor", &USeqEvent_PopulatedActor::eventNotifyPopulatedActor)
          ;
}