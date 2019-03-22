#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_Settings(py::module &m)
{
    py::class_< UUIDataProvider_Settings,  UUIDataProvider   >(m, "UUIDataProvider_Settings")
        .def_readwrite("Settings", &UUIDataProvider_Settings::Settings)
        .def_readwrite("SettingsArrayProviders", &UUIDataProvider_Settings::SettingsArrayProviders)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDynamicDataProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("DataClass", &UUIDynamicDataProvider::DataClass)
        .def_readwrite("DataSource", &UUIDynamicDataProvider::DataSource)
        .def_readwrite("ComplexPropertyTypes", &UUIPropertyDataProvider::ComplexPropertyTypes)
        .def("StaticClass", &UUIDataProvider_Settings::StaticClass, py::return_value_policy::reference)
        .def("OnSettingValueUpdated", &UUIDataProvider_Settings::OnSettingValueUpdated)
        .def("ArrayProviderPropertyChanged", &UUIDataProvider_Settings::ArrayProviderPropertyChanged)
        .def("CleanupDataProvider", &UUIDynamicDataProvider::CleanupDataProvider)
        .def("GetDataSource", &UUIDynamicDataProvider::GetDataSource, py::return_value_policy::reference)
        .def("eventIsValidDataSourceClass", &UUIDynamicDataProvider::eventIsValidDataSourceClass)
        .def("eventProviderInstanceUnbound", &UUIDynamicDataProvider::eventProviderInstanceUnbound)
        .def("eventProviderInstanceBound", &UUIDynamicDataProvider::eventProviderInstanceBound)
        .def("UnbindProviderInstance", &UUIDynamicDataProvider::UnbindProviderInstance)
        .def("BindProviderInstance", &UUIDynamicDataProvider::BindProviderInstance)
        .def("eventGetCustomPropertyValue", &UUIPropertyDataProvider::eventGetCustomPropertyValue)
        .def("CanSupportComplexPropertyType", &UUIPropertyDataProvider::CanSupportComplexPropertyType)
          ;
}