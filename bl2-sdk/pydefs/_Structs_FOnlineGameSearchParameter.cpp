#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchParameter()
{
    py::class_< FOnlineGameSearchParameter >("FOnlineGameSearchParameter")
        .def_readwrite("EntryId", &FOnlineGameSearchParameter::EntryId)
        .def_readwrite("CompareValueId", &FOnlineGameSearchParameter::CompareValueId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchParameter::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchParameter::EntryType)
        .def_readwrite("ComparisonType", &FOnlineGameSearchParameter::ComparisonType)
  ;
}