#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USirenInputContextSelector()
{
    py::class_< USirenInputContextSelector,  UDefaultInputContextSelector   >("USirenInputContextSelector")
        .def("StaticClass", &USirenInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &USirenInputContextSelector::SelectContext)
        .staticmethod("StaticClass")
  ;
}