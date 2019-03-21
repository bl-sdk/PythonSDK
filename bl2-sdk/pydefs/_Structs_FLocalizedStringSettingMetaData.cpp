#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalizedStringSettingMetaData()
{
    py::class_< FLocalizedStringSettingMetaData >("FLocalizedStringSettingMetaData")
        .def_readwrite("Id", &FLocalizedStringSettingMetaData::Id)
        .def_readwrite("Name", &FLocalizedStringSettingMetaData::Name)
        .def_readwrite("ColumnHeaderText", &FLocalizedStringSettingMetaData::ColumnHeaderText)
        .def_readwrite("ValueMappings", &FLocalizedStringSettingMetaData::ValueMappings)
  ;
}