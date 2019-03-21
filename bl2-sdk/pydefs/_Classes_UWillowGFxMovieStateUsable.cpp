#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStateUsable()
{
    py::class_< UWillowGFxMovieStateUsable,  UGFxMovieState   >("UWillowGFxMovieStateUsable")
        .def_readwrite("UsabilityStates", &UWillowGFxMovieStateUsable::UsabilityStates)
        .def("StaticClass", &UWillowGFxMovieStateUsable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}