#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecoilParams()
{
    py::class_< FRecoilParams >("FRecoilParams")
        .def_readwrite("X", &FRecoilParams::X)
        .def_readwrite("Y", &FRecoilParams::Y)
        .def_readwrite("Z", &FRecoilParams::Z)
        .def_readwrite("Padding", &FRecoilParams::Padding)
  ;
}