#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHealthResourcePool()
{
    py::class_< UHealthResourcePool,  UResourcePool   >("UHealthResourcePool")
        .def("StaticClass", &UHealthResourcePool::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}