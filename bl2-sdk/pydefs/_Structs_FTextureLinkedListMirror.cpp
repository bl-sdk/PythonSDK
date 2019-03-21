#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureLinkedListMirror()
{
    py::class_< FTextureLinkedListMirror >("FTextureLinkedListMirror")
        .def_readwrite("Element", &FTextureLinkedListMirror::Element)
        .def_readwrite("Next", &FTextureLinkedListMirror::Next)
        .def_readwrite("PrevLink", &FTextureLinkedListMirror::PrevLink)
  ;
}