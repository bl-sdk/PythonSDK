#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIInputKeyData()
{
    class_< FUIInputKeyData >("FUIInputKeyData", no_init)
        .def_readwrite("InputKeyData", &FUIInputKeyData::InputKeyData)
        .def_readwrite("ButtonFontMarkupString", &FUIInputKeyData::ButtonFontMarkupString)
  ;
}