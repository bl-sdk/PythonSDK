#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocalizedStringSettingMetaData()
{
    class_< FLocalizedStringSettingMetaData >("FLocalizedStringSettingMetaData", no_init)
        .def_readwrite("Id", &FLocalizedStringSettingMetaData::Id)
        .def_readwrite("Name", &FLocalizedStringSettingMetaData::Name)
        .def_readwrite("ColumnHeaderText", &FLocalizedStringSettingMetaData::ColumnHeaderText)
        .def_readwrite("ValueMappings", &FLocalizedStringSettingMetaData::ValueMappings)
  ;
}