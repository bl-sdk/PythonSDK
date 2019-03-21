#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWallTransReachSpec(py::object m)
{
    py::class_< UWallTransReachSpec,  UReachSpec   >(m, "UWallTransReachSpec")
        .def("StaticClass", &UWallTransReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}