#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColumnDataStruct()
{
    class_< FColumnDataStruct >("FColumnDataStruct", no_init)
        .def_readwrite("HeaderText", &FColumnDataStruct::HeaderText)
        .def_readwrite("Value", &FColumnDataStruct::Value)
        .def_readwrite("BarColor", &FColumnDataStruct::BarColor)
  ;
}