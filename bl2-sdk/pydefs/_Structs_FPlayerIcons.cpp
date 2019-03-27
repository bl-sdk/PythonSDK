#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerIcon(py::module &m)
{
    py::class_< FPlayerIcon,  FWorldSpaceIcon   >(m, "FPlayerIcon")
        .def_readwrite("TextClip", &FPlayerIcon::TextClip)
        .def_readwrite("StateClip", &FPlayerIcon::StateClip)
  ;
}