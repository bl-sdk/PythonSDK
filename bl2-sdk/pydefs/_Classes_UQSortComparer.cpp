#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQSortComparer(py::object m)
{
    py::class_< UQSortComparer,  UObject   >(m, "UQSortComparer")
        .def("StaticClass", &UQSortComparer::StaticClass, py::return_value_policy::reference)
          ;
}