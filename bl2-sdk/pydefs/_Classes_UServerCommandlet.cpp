#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UServerCommandlet()
{
    py::class_< UServerCommandlet,  UCommandlet   >("UServerCommandlet")
        .def("StaticClass", &UServerCommandlet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}