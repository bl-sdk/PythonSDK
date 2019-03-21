#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionItemPoolData()
{
    class_< FMissionItemPoolData >("FMissionItemPoolData", no_init)
        .def_readwrite("ItemObjective", &FMissionItemPoolData::ItemObjective)
        .def_readwrite("DirectiveDefinition", &FMissionItemPoolData::DirectiveDefinition)
        .def_readwrite("ItemPool", &FMissionItemPoolData::ItemPool)
  ;
}