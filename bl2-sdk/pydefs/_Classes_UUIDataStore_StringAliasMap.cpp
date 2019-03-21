#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringAliasMap()
{
    class_< UUIDataStore_StringAliasMap, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_StringAliasMap", no_init)
        .def_readwrite("MenuInputMapArray", &UUIDataStore_StringAliasMap::MenuInputMapArray)
        .def_readwrite("MenuInputSets", &UUIDataStore_StringAliasMap::MenuInputSets)
        .def_readwrite("PlayerIndex", &UUIDataStore_StringAliasMap::PlayerIndex)
        .def("StaticClass", &UUIDataStore_StringAliasMap::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetStringWithFieldName", &UUIDataStore_StringAliasMap::GetStringWithFieldName)
        .def("FindMappingWithFieldName", &UUIDataStore_StringAliasMap::FindMappingWithFieldName)
        .def("GetPlayerOwner", &UUIDataStore_StringAliasMap::GetPlayerOwner, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}