#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBeamState(py::module &m)
{
    py::class_< FReplicatedBeamState >(m, "FReplicatedBeamState")
        .def_readwrite("FireDef", &FReplicatedBeamState::FireDef)
        .def_readwrite("ImpactDefinition", &FReplicatedBeamState::ImpactDefinition)
        .def_readwrite("SourceData", &FReplicatedBeamState::SourceData)
        .def_readwrite("TargetData", &FReplicatedBeamState::TargetData)
  ;
}