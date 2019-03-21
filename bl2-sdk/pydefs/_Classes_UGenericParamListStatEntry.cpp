#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGenericParamListStatEntry()
{
    py::class_< UGenericParamListStatEntry,  UObject   >("UGenericParamListStatEntry")
        .def_readwrite("StatEvent", &UGenericParamListStatEntry::StatEvent)
        .def_readwrite("Writer", &UGenericParamListStatEntry::Writer)
        .def("StaticClass", &UGenericParamListStatEntry::StaticClass, py::return_value_policy::reference)
        .def("CommitToDisk", &UGenericParamListStatEntry::CommitToDisk)
        .def("GetString", &UGenericParamListStatEntry::GetString)
        .def("GetVector", &UGenericParamListStatEntry::GetVector)
        .def("GetInt", &UGenericParamListStatEntry::GetInt)
        .def("GetFloat", &UGenericParamListStatEntry::GetFloat)
        .def("AddString", &UGenericParamListStatEntry::AddString)
        .def("AddVector", &UGenericParamListStatEntry::AddVector)
        .def("AddInt", &UGenericParamListStatEntry::AddInt)
        .def("AddFloat", &UGenericParamListStatEntry::AddFloat)
        .staticmethod("StaticClass")
  ;
}