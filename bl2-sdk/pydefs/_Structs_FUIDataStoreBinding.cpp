#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataStoreBinding(py::module &m)
{
    py::class_< FUIDataStoreBinding >(m, "FUIDataStoreBinding")
        .def_readwrite("Subscriber", &FUIDataStoreBinding::Subscriber)
        .def_readwrite("RequiredFieldType", &FUIDataStoreBinding::RequiredFieldType)
        .def_readwrite("MarkupString", &FUIDataStoreBinding::MarkupString)
        .def_readwrite("BindingIndex", &FUIDataStoreBinding::BindingIndex)
        .def_readwrite("DataStoreName", &FUIDataStoreBinding::DataStoreName)
        .def_readwrite("DataStoreField", &FUIDataStoreBinding::DataStoreField)
        .def_readwrite("ResolvedDataStore", &FUIDataStoreBinding::ResolvedDataStore)
  ;
}