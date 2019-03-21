#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_SettingsArray()
{
    class_< UUIDataProvider_SettingsArray, bases< UUIDataProvider >  , boost::noncopyable>("UUIDataProvider_SettingsArray", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataProvider_SettingsArray::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_SettingsArray::VfTable_IUIListElementCellProvider)
        .def_readwrite("Settings", &UUIDataProvider_SettingsArray::Settings)
        .def_readwrite("SettingsId", &UUIDataProvider_SettingsArray::SettingsId)
        .def_readwrite("SettingsName", &UUIDataProvider_SettingsArray::SettingsName)
        .def_readwrite("ColumnHeaderText", &UUIDataProvider_SettingsArray::ColumnHeaderText)
        .def_readwrite("Values", &UUIDataProvider_SettingsArray::Values)
        .def("StaticClass", &UUIDataProvider_SettingsArray::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}