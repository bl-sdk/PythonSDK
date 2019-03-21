#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNounAttributeState()
{
    py::class_< FNounAttributeState >("FNounAttributeState")
        .def_readwrite("NounName", &FNounAttributeState::NounName)
        .def_readwrite("Value", &FNounAttributeState::Value)
        .def_readwrite("BaseValue", &FNounAttributeState::BaseValue)
        .def_readwrite("ModifierStack", &FNounAttributeState::ModifierStack)
        .def_readwrite("ReplicationStrategy", &FNounAttributeState::ReplicationStrategy)
        .def_readwrite("IndexInReplicationArray", &FNounAttributeState::IndexInReplicationArray)
  ;
}