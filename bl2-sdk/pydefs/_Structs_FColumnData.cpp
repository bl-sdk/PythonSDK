#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColumnData(py::object m)
{
    py::class_< FColumnData >(m, "FColumnData")
        .def_readwrite("Text", &FColumnData::Text)
        .def_readwrite("HAlign", &FColumnData::HAlign)
        .def_readwrite("TextColor", &FColumnData::TextColor)
  ;
}