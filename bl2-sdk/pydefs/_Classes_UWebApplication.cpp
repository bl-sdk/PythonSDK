#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWebApplication()
{
    py::class_< UWebApplication,  UObject   >("UWebApplication")
        .def_readwrite("WorldInfo", &UWebApplication::WorldInfo)
        .def_readwrite("WebServer", &UWebApplication::WebServer)
        .def_readwrite("Path", &UWebApplication::Path)
        .def("StaticClass", &UWebApplication::StaticClass, py::return_value_policy::reference)
        .def("PostQuery", &UWebApplication::PostQuery)
        .def("Query", &UWebApplication::Query)
        .def("PreQuery", &UWebApplication::PreQuery)
        .def("CleanupApp", &UWebApplication::CleanupApp)
        .def("Cleanup", &UWebApplication::Cleanup)
        .def("Init", &UWebApplication::Init)
        .staticmethod("StaticClass")
  ;
}