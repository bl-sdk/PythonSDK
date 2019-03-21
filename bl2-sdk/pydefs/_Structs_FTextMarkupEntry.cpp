#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextMarkupEntry()
{
    class_< FTextMarkupEntry >("FTextMarkupEntry", no_init)
        .def_readwrite("MarkupTag", &FTextMarkupEntry::MarkupTag)
        .def_readwrite("HTMLMarkupBeginText", &FTextMarkupEntry::HTMLMarkupBeginText)
        .def_readwrite("HTMLMarkupEndText", &FTextMarkupEntry::HTMLMarkupEndText)
        .def_readwrite("MarkupBeginTag", &FTextMarkupEntry::MarkupBeginTag)
        .def_readwrite("MarkupEndTag", &FTextMarkupEntry::MarkupEndTag)
  ;
}