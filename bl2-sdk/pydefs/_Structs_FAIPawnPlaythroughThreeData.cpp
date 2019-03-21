#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnPlaythroughThreeData(py::object m)
{
    py::class_< FAIPawnPlaythroughThreeData >(m, "FAIPawnPlaythroughThreeData")
        .def_readwrite("AIPawnBalanceDefinitionFullObjectName", &FAIPawnPlaythroughThreeData::AIPawnBalanceDefinitionFullObjectName)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughThreeData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughThreeData::TransformedNames)
  ;
}