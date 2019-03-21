#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamState()
{
    py::class_< FBeamState >("FBeamState")
        .def_readwrite("BeamIndex", &FBeamState::BeamIndex)
        .def_readwrite("ServerOnlyState", &FBeamState::ServerOnlyState)
        .def_readwrite("CoreBeamState", &FBeamState::CoreBeamState)
        .def_readwrite("PartRef", &FBeamState::PartRef)
        .def_readwrite("BeamAudioInfo", &FBeamState::BeamAudioInfo)
        .def_readwrite("BeamImpactAudioInfo", &FBeamState::BeamImpactAudioInfo)
        .def_readwrite("CurrentStartPoint", &FBeamState::CurrentStartPoint)
        .def_readwrite("CurrentEndPoint", &FBeamState::CurrentEndPoint)
        .def_readwrite("CurrentStartTangent", &FBeamState::CurrentStartTangent)
        .def_readwrite("CurrentEndTangent", &FBeamState::CurrentEndTangent)
        .def_readwrite("CurrentDirection", &FBeamState::CurrentDirection)
        .def_readwrite("LastImpactLocation", &FBeamState::LastImpactLocation)
  ;
}