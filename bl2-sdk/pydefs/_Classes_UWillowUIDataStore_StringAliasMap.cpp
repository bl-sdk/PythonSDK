#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowUIDataStore_StringAliasMap()
{
    class_< UWillowUIDataStore_StringAliasMap, bases< UUIDataStore_StringAliasMap >  , boost::noncopyable>("UWillowUIDataStore_StringAliasMap", no_init)
        .def_readwrite("FakePlatform", &UWillowUIDataStore_StringAliasMap::FakePlatform)
        .def("StaticClass", &UWillowUIDataStore_StringAliasMap::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStringWithFieldName", &UWillowUIDataStore_StringAliasMap::GetStringWithFieldName)
        .staticmethod("StaticClass")
  ;
}