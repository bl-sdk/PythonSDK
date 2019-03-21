#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOneTimeDataElement()
{
    class_< FOneTimeDataElement >("FOneTimeDataElement", no_init)
        .def_readwrite("Text", &FOneTimeDataElement::Text)
        .def_readwrite("Icon", &FOneTimeDataElement::Icon)
        .def_readwrite("IconOverride", &FOneTimeDataElement::IconOverride)
        .def_readwrite("TextColor", &FOneTimeDataElement::TextColor)
        .def_readwrite("Data", &FOneTimeDataElement::Data)
  ;
}