#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USirenInputContextSelector(py::module &m)
{
    py::class_< USirenInputContextSelector,  UDefaultInputContextSelector   >(m, "USirenInputContextSelector")
        .def("SelectContext", &USirenInputContextSelector::SelectContext)
          ;
}