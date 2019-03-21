#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigProvider()
{
    py::class_< UUIConfigProvider,  UUIDataProvider   >("UUIConfigProvider")
        .def("StaticClass", &UUIConfigProvider::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}