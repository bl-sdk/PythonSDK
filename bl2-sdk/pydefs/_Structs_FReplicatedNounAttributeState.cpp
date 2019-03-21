#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedNounAttributeState()
{
    class_< FReplicatedNounAttributeState >("FReplicatedNounAttributeState", no_init)
        .def_readwrite("NounName", &FReplicatedNounAttributeState::NounName)
        .def_readwrite("Value", &FReplicatedNounAttributeState::Value)
  ;
}