#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerIcon()
{
    py::class_< FPlayerIcon,  FWorldSpaceIcon   >("FPlayerIcon")
        .def_readwrite("TextClip", &FPlayerIcon::TextClip)
        .def_readwrite("StateClip", &FPlayerIcon::StateClip)
  ;
}