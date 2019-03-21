#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Settings()
{
    py::class_< UUIDataStore_Settings,  UUIDataStore   >("UUIDataStore_Settings")
        .def("StaticClass", &UUIDataStore_Settings::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}