#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection(py::object m)
{
    py::class_< USearchDirection,  UObject   >(m, "USearchDirection")
        .def("StaticClass", &USearchDirection::StaticClass, py::return_value_policy::reference)
          ;
}