#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USirenInputContextSelector(py::object m)
{
    py::class_< USirenInputContextSelector,  UDefaultInputContextSelector   >(m, "USirenInputContextSelector")
        .def("StaticClass", &USirenInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &USirenInputContextSelector::SelectContext)
          ;
}