#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIInputKeyData(py::module &m)
{
    py::class_< FUIInputKeyData >(m, "FUIInputKeyData")
        .def_readwrite("InputKeyData", &FUIInputKeyData::InputKeyData)
        .def_readwrite("ButtonFontMarkupString", &FUIInputKeyData::ButtonFontMarkupString)
  ;
}