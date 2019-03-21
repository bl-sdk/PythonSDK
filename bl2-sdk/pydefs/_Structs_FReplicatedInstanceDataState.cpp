#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedInstanceDataState(py::object m)
{
    py::class_< FReplicatedInstanceDataState >(m, "FReplicatedInstanceDataState")
        .def_readwrite("SwitchStateBitField", &FReplicatedInstanceDataState::SwitchStateBitField)
        .def_readwrite("ActiveSwitchValues", &FReplicatedInstanceDataState::ActiveSwitchValues)
        .def_readwrite("RemovedBodyCompositionPartsBitField", &FReplicatedInstanceDataState::RemovedBodyCompositionPartsBitField)
  ;
}