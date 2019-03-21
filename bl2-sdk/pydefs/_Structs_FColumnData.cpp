#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColumnData()
{
    class_< FColumnData >("FColumnData", no_init)
        .def_readwrite("Text", &FColumnData::Text)
        .def_readwrite("HAlign", &FColumnData::HAlign)
        .def_readwrite("TextColor", &FColumnData::TextColor)
  ;
}