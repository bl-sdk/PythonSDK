#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_Registry()
{
    class_< UUIDataStore_Registry, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_Registry", no_init)
        .def_readwrite("RegistryDataProvider", &UUIDataStore_Registry::RegistryDataProvider)
        .def("StaticClass", &UUIDataStore_Registry::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDataProvider", &UUIDataStore_Registry::GetDataProvider, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}