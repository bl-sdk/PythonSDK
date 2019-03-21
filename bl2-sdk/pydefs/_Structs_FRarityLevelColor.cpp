#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRarityLevelColor()
{
    class_< FRarityLevelColor >("FRarityLevelColor", no_init)
        .def_readwrite("MinLevel", &FRarityLevelColor::MinLevel)
        .def_readwrite("MaxLevel", &FRarityLevelColor::MaxLevel)
        .def_readwrite("Color", &FRarityLevelColor::Color)
        .def_readwrite("DropLifeSpanType", &FRarityLevelColor::DropLifeSpanType)
        .def_readwrite("RarityRating", &FRarityLevelColor::RarityRating)
  ;
}