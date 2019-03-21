#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URulePlaceholder()
{
    py::class_< URulePlaceholder,  URule   >("URulePlaceholder")
        .def("StaticClass", &URulePlaceholder::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}