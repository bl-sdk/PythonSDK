#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedNounAttributeState()
{
    py::class_< FReplicatedNounAttributeState >("FReplicatedNounAttributeState")
        .def_readwrite("NounName", &FReplicatedNounAttributeState::NounName)
        .def_readwrite("Value", &FReplicatedNounAttributeState::Value)
  ;
}