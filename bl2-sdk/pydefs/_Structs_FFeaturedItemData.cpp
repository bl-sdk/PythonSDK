#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFeaturedItemData()
{
    py::class_< FFeaturedItemData >("FFeaturedItemData")
        .def_readwrite("CommerceMarkup", &FFeaturedItemData::CommerceMarkup)
        .def_readwrite("LootConfiguration", &FFeaturedItemData::LootConfiguration)
        .def_readwrite("GameStageValue", &FFeaturedItemData::GameStageValue)
        .def_readwrite("AwesomeLevelValue", &FFeaturedItemData::AwesomeLevelValue)
  ;
}