#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWrappedStringElement()
{
    class_< FWrappedStringElement >("FWrappedStringElement", no_init)
        .def_readwrite("Value", &FWrappedStringElement::Value)
        .def_readwrite("LineExtent", &FWrappedStringElement::LineExtent)
  ;
}