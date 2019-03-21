#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchParameter()
{
    class_< FOnlineGameSearchParameter >("FOnlineGameSearchParameter", no_init)
        .def_readwrite("EntryId", &FOnlineGameSearchParameter::EntryId)
        .def_readwrite("CompareValueId", &FOnlineGameSearchParameter::CompareValueId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchParameter::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchParameter::EntryType)
        .def_readwrite("ComparisonType", &FOnlineGameSearchParameter::ComparisonType)
  ;
}