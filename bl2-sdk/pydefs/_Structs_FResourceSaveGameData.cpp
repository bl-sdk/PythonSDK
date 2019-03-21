#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FResourceSaveGameData()
{
    class_< FResourceSaveGameData >("FResourceSaveGameData", no_init)
        .def_readwrite("ResourceDefinition", &FResourceSaveGameData::ResourceDefinition)
        .def_readwrite("ResourcePoolDefinition", &FResourceSaveGameData::ResourcePoolDefinition)
        .def_readwrite("Amount", &FResourceSaveGameData::Amount)
        .def_readwrite("UpgradeLevel", &FResourceSaveGameData::UpgradeLevel)
  ;
}