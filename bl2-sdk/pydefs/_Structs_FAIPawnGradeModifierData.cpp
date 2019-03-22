#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIPawnGradeModifierData(py::module &m)
{
    py::class_< FAIPawnGradeModifierData >(m, "FAIPawnGradeModifierData")
        .def_readwrite("CustomAIPawnArchetype", &FAIPawnGradeModifierData::CustomAIPawnArchetype)
        .def_readwrite("DisplayName", &FAIPawnGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FAIPawnGradeModifierData::ExpLevel)
        .def_readwrite("OnSpawnCustomizations", &FAIPawnGradeModifierData::OnSpawnCustomizations)
        .def_readwrite("AttributeStartingValues", &FAIPawnGradeModifierData::AttributeStartingValues)
        .def_readwrite("CustomItemPoolIncludedLists", &FAIPawnGradeModifierData::CustomItemPoolIncludedLists)
        .def_readwrite("CustomItemPoolList", &FAIPawnGradeModifierData::CustomItemPoolList)
        .def_readwrite("TransformedNames", &FAIPawnGradeModifierData::TransformedNames)
  ;
}