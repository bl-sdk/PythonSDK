#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWebApplication()
{
    class_< UWebApplication, bases< UObject >  , boost::noncopyable>("UWebApplication", no_init)
        .def_readwrite("WorldInfo", &UWebApplication::WorldInfo)
        .def_readwrite("WebServer", &UWebApplication::WebServer)
        .def_readwrite("Path", &UWebApplication::Path)
        .def("StaticClass", &UWebApplication::StaticClass, return_value_policy< reference_existing_object >())
        .def("PostQuery", &UWebApplication::PostQuery)
        .def("Query", &UWebApplication::Query)
        .def("PreQuery", &UWebApplication::PreQuery)
        .def("CleanupApp", &UWebApplication::CleanupApp)
        .def("Cleanup", &UWebApplication::Cleanup)
        .def("Init", &UWebApplication::Init)
        .staticmethod("StaticClass")
  ;
}