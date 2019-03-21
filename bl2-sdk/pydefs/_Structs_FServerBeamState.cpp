#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerBeamState(py::object m)
{
    py::class_< FServerBeamState >(m, "FServerBeamState")
        .def_readwrite("DamageData", &FServerBeamState::DamageData)
        .def_readwrite("DamageInstigator", &FServerBeamState::DamageInstigator)
        .def_readwrite("StartTime", &FServerBeamState::StartTime)
        .def_readwrite("LockTime", &FServerBeamState::LockTime)
        .def_readwrite("NextTraceTime", &FServerBeamState::NextTraceTime)
        .def_readwrite("BeamNetUpdateTime", &FServerBeamState::BeamNetUpdateTime)
        .def_readwrite("LastDamageApplicationTime", &FServerBeamState::LastDamageApplicationTime)
        .def_readwrite("LastDamagedActor", &FServerBeamState::LastDamagedActor)
        .def_readwrite("NextRandomBoneTime", &FServerBeamState::NextRandomBoneTime)
        .def_readwrite("ParentBeamIndex", &FServerBeamState::ParentBeamIndex)
        .def_readwrite("ChildBeamsIndicies", &FServerBeamState::ChildBeamsIndicies)
  ;
}