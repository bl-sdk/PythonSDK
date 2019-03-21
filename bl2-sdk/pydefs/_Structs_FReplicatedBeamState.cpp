#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedBeamState()
{
    class_< FReplicatedBeamState >("FReplicatedBeamState", no_init)
        .def_readwrite("FireDef", &FReplicatedBeamState::FireDef)
        .def_readwrite("ImpactDefinition", &FReplicatedBeamState::ImpactDefinition)
        .def_readwrite("SourceData", &FReplicatedBeamState::SourceData)
        .def_readwrite("TargetData", &FReplicatedBeamState::TargetData)
  ;
}