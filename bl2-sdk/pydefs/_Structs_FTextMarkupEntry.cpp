#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextMarkupEntry(py::module &m)
{
    py::class_< FTextMarkupEntry >(m, "FTextMarkupEntry")
        .def_readwrite("MarkupTag", &FTextMarkupEntry::MarkupTag)
        .def_readwrite("HTMLMarkupBeginText", &FTextMarkupEntry::HTMLMarkupBeginText)
        .def_readwrite("HTMLMarkupEndText", &FTextMarkupEntry::HTMLMarkupEndText)
        .def_readwrite("MarkupBeginTag", &FTextMarkupEntry::MarkupBeginTag)
        .def_readwrite("MarkupEndTag", &FTextMarkupEntry::MarkupEndTag)
  ;
}