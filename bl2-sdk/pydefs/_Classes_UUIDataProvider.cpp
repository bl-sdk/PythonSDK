#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider()
{
    class_< UUIDataProvider, bases< UUIRoot >  , boost::noncopyable>("UUIDataProvider", no_init)
        .def_readwrite("WriteAccessType", &UUIDataProvider::WriteAccessType)
        .def_readwrite("ProviderChangedNotifies", &UUIDataProvider::ProviderChangedNotifies)
        .def("StaticClass", &UUIDataProvider::StaticClass, return_value_policy< reference_existing_object >())
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