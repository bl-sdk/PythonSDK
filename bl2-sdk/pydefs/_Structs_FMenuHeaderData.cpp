#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMenuHeaderData()
{
    class_< FMenuHeaderData >("FMenuHeaderData", no_init)
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