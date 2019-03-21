#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_SettingsArray()
{
    py::class_< UUIDataProvider_SettingsArray,  UUIDataProvider   >("UUIDataProvider_SettingsArray")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataProvider_SettingsArray::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_SettingsArray::VfTable_IUIListElementCellProvider)
        .def_readwrite("Settings", &UUIDataProvider_SettingsArray::Settings)
        .def_readwrite("SettingsId", &UUIDataProvider_SettingsArray::SettingsId)
        .def_readwrite("SettingsName", &UUIDataProvider_SettingsArray::SettingsName)
        .def_readwrite("ColumnHeaderText", &UUIDataProvider_SettingsArray::ColumnHeaderText)
        .def_readwrite("Values", &UUIDataProvider_SettingsArray::Values)
        .def("StaticClass", &UUIDataProvider_SettingsArray::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}