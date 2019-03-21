#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieStateFlags()
{
    py::class_< UGFxMovieStateFlags,  UGFxMovieState   >("UGFxMovieStateFlags")
        .def_readwrite("CustomFlags", &UGFxMovieStateFlags::CustomFlags)
        .def("StaticClass", &UGFxMovieStateFlags::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}