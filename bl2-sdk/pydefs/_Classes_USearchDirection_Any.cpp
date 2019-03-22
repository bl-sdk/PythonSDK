#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_Any(py::module &m)
{
    py::class_< USearchDirection_Any,  USearchDirection   >(m, "USearchDirection_Any")
        .def("StaticClass", &USearchDirection_Any::StaticClass, py::return_value_policy::reference)
          ;
}