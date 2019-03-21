#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FtMenuTextPos()
{
    py::class_< FtMenuTextPos >("FtMenuTextPos")
        .def_readwrite("TextHAlign", &FtMenuTextPos::TextHAlign)
        .def_readwrite("TextXPos", &FtMenuTextPos::TextXPos)
        .def_readwrite("TextVAlign", &FtMenuTextPos::TextVAlign)
        .def_readwrite("TextYPos", &FtMenuTextPos::TextYPos)
  ;
}