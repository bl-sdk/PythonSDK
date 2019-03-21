#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_MenuItem()
{
    py::class_< UUIDataProvider_MenuItem,  UUIResourceDataProvider   >("UUIDataProvider_MenuItem")
        .def_readwrite("OptionType", &UUIDataProvider_MenuItem::OptionType)
        .def_readwrite("OptionSet", &UUIDataProvider_MenuItem::OptionSet)
        .def_readwrite("DataStoreMarkup", &UUIDataProvider_MenuItem::DataStoreMarkup)
        .def_readwrite("DescriptionMarkup", &UUIDataProvider_MenuItem::DescriptionMarkup)
        .def_readwrite("RequiredGameMode", &UUIDataProvider_MenuItem::RequiredGameMode)
        .def_readwrite("FriendlyName", &UUIDataProvider_MenuItem::FriendlyName)
        .def_readwrite("CustomFriendlyName", &UUIDataProvider_MenuItem::CustomFriendlyName)
        .def_readwrite("Description", &UUIDataProvider_MenuItem::Description)
        .def_readwrite("EditBoxMaxLength", &UUIDataProvider_MenuItem::EditBoxMaxLength)
        .def_readwrite("RangeData", &UUIDataProvider_MenuItem::RangeData)
        .def_readwrite("SchemaCellFields", &UUIDataProvider_MenuItem::SchemaCellFields)
        .def_readwrite("IniName", &UUIDataProvider_MenuItem::IniName)
        .def("StaticClass", &UUIDataProvider_MenuItem::StaticClass, py::return_value_policy::reference)
        .def("IsFiltered", &UUIDataProvider_MenuItem::IsFiltered)
        .staticmethod("StaticClass")
  ;
}