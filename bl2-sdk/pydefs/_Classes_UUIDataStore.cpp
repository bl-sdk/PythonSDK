#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore()
{
    class_< UUIDataStore, bases< UUIRoot >  , boost::noncopyable>("UUIDataStore", no_init)
        .def_readwrite("Tag", &UUIDataStore::Tag)
        .def_readwrite("RefreshSubscriberNotifies", &UUIDataStore::RefreshSubscriberNotifies)
        .def_readwrite("WriteAccessType", &UUIDataProvider::WriteAccessType)
        .def_readwrite("ProviderChangedNotifies", &UUIDataProvider::ProviderChangedNotifies)
        .def("StaticClass", &UUIDataStore::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDataStoreClient", &UUIDataStore::GetDataStoreClient, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}