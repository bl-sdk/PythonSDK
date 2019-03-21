#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSettingsPropertyPropertyMetaData()
{
    class_< FSettingsPropertyPropertyMetaData >("FSettingsPropertyPropertyMetaData", no_init)
        .def_readwrite("Id", &FSettingsPropertyPropertyMetaData::Id)
        .def_readwrite("Name", &FSettingsPropertyPropertyMetaData::Name)
        .def_readwrite("ColumnHeaderText", &FSettingsPropertyPropertyMetaData::ColumnHeaderText)
        .def_readwrite("MappingType", &FSettingsPropertyPropertyMetaData::MappingType)
        .def_readwrite("ValueMappings", &FSettingsPropertyPropertyMetaData::ValueMappings)
        .def_readwrite("PredefinedValues", &FSettingsPropertyPropertyMetaData::PredefinedValues)
        .def_readwrite("MinVal", &FSettingsPropertyPropertyMetaData::MinVal)
        .def_readwrite("MaxVal", &FSettingsPropertyPropertyMetaData::MaxVal)
        .def_readwrite("RangeIncrement", &FSettingsPropertyPropertyMetaData::RangeIncrement)
  ;
}