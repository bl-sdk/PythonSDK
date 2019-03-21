#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureLinkedListMirror(py::object m)
{
    py::class_< FTextureLinkedListMirror >(m, "FTextureLinkedListMirror")
        .def_readwrite("Element", &FTextureLinkedListMirror::Element)
        .def_readwrite("Next", &FTextureLinkedListMirror::Next)
        .def_readwrite("PrevLink", &FTextureLinkedListMirror::PrevLink)
  ;
}