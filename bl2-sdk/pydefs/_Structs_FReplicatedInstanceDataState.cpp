#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedInstanceDataState()
{
    class_< FReplicatedInstanceDataState >("FReplicatedInstanceDataState", no_init)
        .def_readwrite("SwitchStateBitField", &FReplicatedInstanceDataState::SwitchStateBitField)
        .def_readwrite("ActiveSwitchValues", &FReplicatedInstanceDataState::ActiveSwitchValues)
        .def_readwrite("RemovedBodyCompositionPartsBitField", &FReplicatedInstanceDataState::RemovedBodyCompositionPartsBitField)
  ;
}