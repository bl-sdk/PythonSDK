#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_PopulatedPoint()
{
    py::class_< USeqEvent_PopulatedPoint,  USequenceEvent   >("USeqEvent_PopulatedPoint")
        .def_readwrite("DestPopulationOpportunity", &USeqEvent_PopulatedPoint::DestPopulationOpportunity)
        .def_readwrite("SpawnPoint", &USeqEvent_PopulatedPoint::SpawnPoint)
        .def("StaticClass", &USeqEvent_PopulatedPoint::StaticClass, py::return_value_policy::reference)
        .def("eventNotifyPopulatedActor", &USeqEvent_PopulatedPoint::eventNotifyPopulatedActor)
        .staticmethod("StaticClass")
  ;
}