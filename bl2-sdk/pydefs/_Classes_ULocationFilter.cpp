#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocationFilter()
{
    py::class_< ULocationFilter,  UObject   >("ULocationFilter")
        .def("StaticClass", &ULocationFilter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}