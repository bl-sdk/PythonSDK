#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIPawnPlaythroughThreeData()
{
    class_< FAIPawnPlaythroughThreeData >("FAIPawnPlaythroughThreeData", no_init)
        .def_readwrite("AIPawnBalanceDefinitionFullObjectName", &FAIPawnPlaythroughThreeData::AIPawnBalanceDefinitionFullObjectName)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughThreeData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughThreeData::TransformedNames)
  ;
}