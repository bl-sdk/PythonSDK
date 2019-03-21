#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Remote()
{
    py::class_< UUIDataStore_Remote,  UUIDataStore   >("UUIDataStore_Remote")
        .def("StaticClass", &UUIDataStore_Remote::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}