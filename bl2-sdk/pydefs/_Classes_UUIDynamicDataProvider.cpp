#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDynamicDataProvider(py::module &m)
{
    py::class_< UUIDynamicDataProvider,  UUIDataProvider   >(m, "UUIDynamicDataProvider")
		.def_static("StaticClass", &UUIDynamicDataProvider::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDynamicDataProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("DataClass", &UUIDynamicDataProvider::DataClass)
        .def_readwrite("DataSource", &UUIDynamicDataProvider::DataSource)
        .def_readwrite("ComplexPropertyTypes", &UUIPropertyDataProvider::ComplexPropertyTypes)
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