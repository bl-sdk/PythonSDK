#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISimpleAnimPlayer()
{
    py::class_< UISimpleAnimPlayer,  UInterface   >("UISimpleAnimPlayer")
        .def("StaticClass", &UISimpleAnimPlayer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}