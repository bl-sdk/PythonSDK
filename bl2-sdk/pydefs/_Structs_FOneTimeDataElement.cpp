#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOneTimeDataElement(py::object m)
{
    py::class_< FOneTimeDataElement >(m, "FOneTimeDataElement")
        .def_readwrite("Text", &FOneTimeDataElement::Text)
        .def_readwrite("Icon", &FOneTimeDataElement::Icon)
        .def_readwrite("IconOverride", &FOneTimeDataElement::IconOverride)
        .def_readwrite("TextColor", &FOneTimeDataElement::TextColor)
        .def_readwrite("Data", &FOneTimeDataElement::Data)
  ;
}