#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIInputKeyData()
{
    py::class_< FUIInputKeyData >("FUIInputKeyData")
        .def_readwrite("InputKeyData", &FUIInputKeyData::InputKeyData)
        .def_readwrite("ButtonFontMarkupString", &FUIInputKeyData::ButtonFontMarkupString)
  ;
}