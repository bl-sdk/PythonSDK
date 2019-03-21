#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnPlaythroughThreeData()
{
    py::class_< FAIPawnPlaythroughThreeData >("FAIPawnPlaythroughThreeData")
        .def_readwrite("AIPawnBalanceDefinitionFullObjectName", &FAIPawnPlaythroughThreeData::AIPawnBalanceDefinitionFullObjectName)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughThreeData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughThreeData::TransformedNames)
  ;
}