#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigFileProvider()
{
    py::class_< UUIConfigFileProvider,  UUIConfigProvider   >("UUIConfigFileProvider")
        .def_readwrite("Sections", &UUIConfigFileProvider::Sections)
        .def_readwrite("ConfigFileName", &UUIConfigFileProvider::ConfigFileName)
        .def("StaticClass", &UUIConfigFileProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}