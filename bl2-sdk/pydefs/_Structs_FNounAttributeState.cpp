#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNounAttributeState()
{
    class_< FNounAttributeState >("FNounAttributeState", no_init)
        .def_readwrite("NounName", &FNounAttributeState::NounName)
        .def_readwrite("Value", &FNounAttributeState::Value)
        .def_readwrite("BaseValue", &FNounAttributeState::BaseValue)
        .def_readwrite("ModifierStack", &FNounAttributeState::ModifierStack)
        .def_readwrite("ReplicationStrategy", &FNounAttributeState::ReplicationStrategy)
        .def_readwrite("IndexInReplicationArray", &FNounAttributeState::IndexInReplicationArray)
  ;
}