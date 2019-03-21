#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemSettings()
{
    class_< FItemSettings >("FItemSettings", no_init)
        .def_readwrite("ItemDefinition", &FItemSettings::ItemDefinition)
        .def_readwrite("BalanceDefinition", &FItemSettings::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FItemSettings::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FItemSettings::ManufacturerGradeIndex)
        .def_readwrite("Level", &FItemSettings::Level)
        .def_readonly("GenericParts", &FItemSettings::GenericParts)
        .def_readwrite("CurrentPartBeingSet", &FItemSettings::CurrentPartBeingSet)
        .def_readwrite("ItemBuilderIndex", &FItemSettings::ItemBuilderIndex)
        .def_readwrite("ActiveSubmenuForThisItem", &FItemSettings::ActiveSubmenuForThisItem)
  ;
}