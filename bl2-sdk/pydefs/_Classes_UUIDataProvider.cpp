#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider(py::module &m)
{
    py::class_< UUIDataProvider,  UUIRoot   >(m, "UUIDataProvider")
		.def_static("StaticClass", &UUIDataProvider::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WriteAccessType", &UUIDataProvider::WriteAccessType)
        .def_readwrite("ProviderChangedNotifies", &UUIDataProvider::ProviderChangedNotifies)
        .def("ParseTagArrayDelimiter", &UUIDataProvider::ParseTagArrayDelimiter)
        .def("RemovePropertyNotificationChangeRequest", &UUIDataProvider::RemovePropertyNotificationChangeRequest)
        .def("AddPropertyNotificationChangeRequest", &UUIDataProvider::AddPropertyNotificationChangeRequest)
        .def("eventNotifyPropertyChanged", &UUIDataProvider::eventNotifyPropertyChanged)
        .def("eventIsCollectionDataType", &UUIDataProvider::eventIsCollectionDataType)
        .def("eventIsProviderDisabled", &UUIDataProvider::eventIsProviderDisabled)
        .def("eventGenerateFillerData", &UUIDataProvider::eventGenerateFillerData)
        .def("eventGenerateScriptMarkupString", &UUIDataProvider::eventGenerateScriptMarkupString)
        .def("eventSetFieldValue", &UUIDataProvider::eventSetFieldValue)
        .def("eventGetFieldValue", &UUIDataProvider::eventGetFieldValue)
        .def("eventAllowPublishingToField", &UUIDataProvider::eventAllowPublishingToField)
        .def("eventGetSupportedScriptFields", &UUIDataProvider::eventGetSupportedScriptFields)
        .def("ParseArrayDelimiter", &UUIDataProvider::ParseArrayDelimiter)
        .def("GetProviderFieldType", &UUIDataProvider::GetProviderFieldType)
        .def("OnDataProviderPropertyChange", &UUIDataProvider::OnDataProviderPropertyChange)
          ;
}