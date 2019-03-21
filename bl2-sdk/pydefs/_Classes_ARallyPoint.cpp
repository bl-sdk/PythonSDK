#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARallyPoint(py::object m)
{
    py::class_< ARallyPoint,  AActor   >(m, "ARallyPoint")
        .def("StaticClass", &ARallyPoint::StaticClass, py::return_value_policy::reference)
          ;
}