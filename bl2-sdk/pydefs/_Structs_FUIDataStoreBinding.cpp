#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIDataStoreBinding()
{
    class_< FUIDataStoreBinding >("FUIDataStoreBinding", no_init)
        .def_readwrite("Subscriber", &FUIDataStoreBinding::Subscriber)
        .def_readonly("UnknownData00", &FUIDataStoreBinding::UnknownData00)
        .def_readwrite("RequiredFieldType", &FUIDataStoreBinding::RequiredFieldType)
        .def_readwrite("MarkupString", &FUIDataStoreBinding::MarkupString)
        .def_readwrite("BindingIndex", &FUIDataStoreBinding::BindingIndex)
        .def_readwrite("DataStoreName", &FUIDataStoreBinding::DataStoreName)
        .def_readwrite("DataStoreField", &FUIDataStoreBinding::DataStoreField)
        .def_readwrite("ResolvedDataStore", &FUIDataStoreBinding::ResolvedDataStore)
  ;
}