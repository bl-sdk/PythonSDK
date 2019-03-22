#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurrencyPresentation(py::module &m)
{
    py::class_< FCurrencyPresentation >(m, "FCurrencyPresentation")
        .def_readwrite("Type", &FCurrencyPresentation::Type)
        .def_readwrite("WidgetFrame", &FCurrencyPresentation::WidgetFrame)
        .def_readwrite("WidgetClip", &FCurrencyPresentation::WidgetClip)
  ;
}