#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore(py::module &m)
{
    py::class_< UUIDataStore,  UUIRoot   >(m, "UUIDataStore")
		.def_static("StaticClass", &UUIDataStore::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tag", &UUIDataStore::Tag)
        .def_readwrite("RefreshSubscriberNotifies", &UUIDataStore::RefreshSubscriberNotifies)
        .def_readwrite("WriteAccessType", &UUIDataProvider::WriteAccessType)
        .def_readwrite("ProviderChangedNotifies", &UUIDataProvider::ProviderChangedNotifies)
        .def("GetDataStoreClient", &UUIDataStore::GetDataStoreClient, py::return_value_policy::reference)
        .def("OnCommit", &UUIDataStore::OnCommit)
        .def("eventRefreshSubscribers", &UUIDataStore::eventRefreshSubscribers)
        .def("NotifyGameSessionEnded", &UUIDataStore::NotifyGameSessionEnded)
        .def("eventSubscriberDetached", &UUIDataStore::eventSubscriberDetached)
        .def("eventSubscriberAttached", &UUIDataStore::eventSubscriberAttached)
        .def("eventUnregistered", &UUIDataStore::eventUnregistered)
        .def("eventRegistered", &UUIDataStore::eventRegistered)
        .def("OnDataStoreValueUpdated", &UUIDataStore::OnDataStoreValueUpdated)
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