#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_Settings()
{
    class_< UUIDataProvider_Settings, bases< UUIDataProvider >  , boost::noncopyable>("UUIDataProvider_Settings", no_init)
        .def_readwrite("Settings", &UUIDataProvider_Settings::Settings)
        .def_readwrite("SettingsArrayProviders", &UUIDataProvider_Settings::SettingsArrayProviders)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDynamicDataProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("DataClass", &UUIDynamicDataProvider::DataClass)
        .def_readwrite("DataSource", &UUIDynamicDataProvider::DataSource)
        .def_readwrite("ComplexPropertyTypes", &UUIPropertyDataProvider::ComplexPropertyTypes)
        .def("StaticClass", &UUIDataProvider_Settings::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnSettingValueUpdated", &UUIDataProvider_Settings::OnSettingValueUpdated)
        .def("ArrayProviderPropertyChanged", &UUIDataProvider_Settings::ArrayProviderPropertyChanged)
        .def("CleanupDataProvider", &UUIDynamicDataProvider::CleanupDataProvider)
        .def("GetDataSource", &UUIDynamicDataProvider::GetDataSource, return_value_policy< reference_existing_object >())
        .def("eventIsValidDataSourceClass", &UUIDynamicDataProvider::eventIsValidDataSourceClass)
        .def("eventProviderInstanceUnbound", &UUIDynamicDataProvider::eventProviderInstanceUnbound)
        .def("eventProviderInstanceBound", &UUIDynamicDataProvider::eventProviderInstanceBound)
        .def("UnbindProviderInstance", &UUIDynamicDataProvider::UnbindProviderInstance)
        .def("BindProviderInstance", &UUIDynamicDataProvider::BindProviderInstance)
        .def("eventGetCustomPropertyValue", &UUIPropertyDataProvider::eventGetCustomPropertyValue)
        .def("CanSupportComplexPropertyType", &UUIPropertyDataProvider::CanSupportComplexPropertyType)
        .staticmethod("StaticClass")
  ;
}