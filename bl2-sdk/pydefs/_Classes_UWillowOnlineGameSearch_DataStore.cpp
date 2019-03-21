#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearch_DataStore()
{
    class_< UWillowOnlineGameSearch_DataStore, bases< UUIDataStore_OnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearch_DataStore", no_init)
        .def("StaticClass", &UWillowOnlineGameSearch_DataStore::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCurrentSearchName", &UWillowOnlineGameSearch_DataStore::GetCurrentSearchName)
        .staticmethod("StaticClass")
  ;
}