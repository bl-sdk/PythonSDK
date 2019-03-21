#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Fonts()
{
    py::class_< UUIDataStore_Fonts,  UUIDataStore   >("UUIDataStore_Fonts")
        .def("StaticClass", &UUIDataStore_Fonts::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}