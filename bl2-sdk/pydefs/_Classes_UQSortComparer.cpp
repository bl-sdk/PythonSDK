#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQSortComparer()
{
    py::class_< UQSortComparer,  UObject   >("UQSortComparer")
        .def("StaticClass", &UQSortComparer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}