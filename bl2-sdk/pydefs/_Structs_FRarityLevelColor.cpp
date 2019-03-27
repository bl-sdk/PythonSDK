#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRarityLevelColor(py::module &m)
{
    py::class_< FRarityLevelColor >(m, "FRarityLevelColor")
        .def_readwrite("MinLevel", &FRarityLevelColor::MinLevel)
        .def_readwrite("MaxLevel", &FRarityLevelColor::MaxLevel)
        .def_readwrite("Color", &FRarityLevelColor::Color)
        .def_readwrite("DropLifeSpanType", &FRarityLevelColor::DropLifeSpanType)
        .def_readwrite("RarityRating", &FRarityLevelColor::RarityRating)
  ;
}