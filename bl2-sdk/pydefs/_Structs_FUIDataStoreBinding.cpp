#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataStoreBinding()
{
    py::class_< FUIDataStoreBinding >("FUIDataStoreBinding")
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