#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedNounAttributeState(py::object m)
{
    py::class_< FReplicatedNounAttributeState >(m, "FReplicatedNounAttributeState")
        .def_readwrite("NounName", &FReplicatedNounAttributeState::NounName)
        .def_readwrite("Value", &FReplicatedNounAttributeState::Value)
  ;
}