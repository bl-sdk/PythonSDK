#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGenericParamListStatEntry()
{
    class_< UGenericParamListStatEntry, bases< UObject >  , boost::noncopyable>("UGenericParamListStatEntry", no_init)
        .def_readwrite("StatEvent", &UGenericParamListStatEntry::StatEvent)
        .def_readwrite("Writer", &UGenericParamListStatEntry::Writer)
        .def("StaticClass", &UGenericParamListStatEntry::StaticClass, return_value_policy< reference_existing_object >())
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