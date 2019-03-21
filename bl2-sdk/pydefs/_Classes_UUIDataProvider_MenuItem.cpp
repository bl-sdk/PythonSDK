#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_MenuItem()
{
    class_< UUIDataProvider_MenuItem, bases< UUIResourceDataProvider >  , boost::noncopyable>("UUIDataProvider_MenuItem", no_init)
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
        .def("StaticClass", &UUIDataProvider_MenuItem::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsFiltered", &UUIDataProvider_MenuItem::IsFiltered)
        .staticmethod("StaticClass")
  ;
}