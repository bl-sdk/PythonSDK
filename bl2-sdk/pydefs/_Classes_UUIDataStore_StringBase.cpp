#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringBase()
{
    py::class_< UUIDataStore_StringBase,  UUIDataStore   >("UUIDataStore_StringBase")
        .def("StaticClass", &UUIDataStore_StringBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}