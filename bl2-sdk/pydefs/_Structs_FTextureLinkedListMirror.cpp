#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureLinkedListMirror()
{
    class_< FTextureLinkedListMirror >("FTextureLinkedListMirror", no_init)
        .def_readwrite("Element", &FTextureLinkedListMirror::Element)
        .def_readwrite("Next", &FTextureLinkedListMirror::Next)
        .def_readwrite("PrevLink", &FTextureLinkedListMirror::PrevLink)
  ;
}