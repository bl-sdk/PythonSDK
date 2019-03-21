#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColumnData()
{
    py::class_< FColumnData >("FColumnData")
        .def_readwrite("Text", &FColumnData::Text)
        .def_readwrite("HAlign", &FColumnData::HAlign)
        .def_readwrite("TextColor", &FColumnData::TextColor)
  ;
}