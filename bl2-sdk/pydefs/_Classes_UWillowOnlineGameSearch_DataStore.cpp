#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch_DataStore()
{
    py::class_< UWillowOnlineGameSearch_DataStore,  UUIDataStore_OnlineGameSearch   >("UWillowOnlineGameSearch_DataStore")
        .def("StaticClass", &UWillowOnlineGameSearch_DataStore::StaticClass, py::return_value_policy::reference)
        .def("GetCurrentSearchName", &UWillowOnlineGameSearch_DataStore::GetCurrentSearchName)
        .staticmethod("StaticClass")
  ;
}