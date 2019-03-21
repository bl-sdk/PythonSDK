#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin(py::object m)
{
    py::class_< USearchOrigin,  UObject   >(m, "USearchOrigin")
        .def("StaticClass", &USearchOrigin::StaticClass, py::return_value_policy::reference)
          ;
}