#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFeaturedItemData()
{
    class_< FFeaturedItemData >("FFeaturedItemData", no_init)
        .def_readwrite("CommerceMarkup", &FFeaturedItemData::CommerceMarkup)
        .def_readwrite("LootConfiguration", &FFeaturedItemData::LootConfiguration)
        .def_readwrite("GameStageValue", &FFeaturedItemData::GameStageValue)
        .def_readwrite("AwesomeLevelValue", &FFeaturedItemData::AwesomeLevelValue)
  ;
}