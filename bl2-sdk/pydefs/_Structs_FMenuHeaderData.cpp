#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMenuHeaderData(py::object m)
{
    py::class_< FMenuHeaderData >(m, "FMenuHeaderData")
        .def_readwrite("Header", &FMenuHeaderData::Header)
        .def_readwrite("Width", &FMenuHeaderData::Width)
        .def_readwrite("InterfaceName", &FMenuHeaderData::InterfaceName)
        .def_readwrite("FontSize", &FMenuHeaderData::FontSize)
        .def_readwrite("TextColor", &FMenuHeaderData::TextColor)
        .def_readwrite("TextHighlightColor", &FMenuHeaderData::TextHighlightColor)
        .def_readwrite("IconColor", &FMenuHeaderData::IconColor)
        .def_readwrite("IconU", &FMenuHeaderData::IconU)
        .def_readwrite("IconV", &FMenuHeaderData::IconV)
        .def_readwrite("IconUL", &FMenuHeaderData::IconUL)
        .def_readwrite("IconVL", &FMenuHeaderData::IconVL)
  ;
}