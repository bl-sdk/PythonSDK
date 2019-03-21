#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStateUsable(py::object m)
{
    py::class_< UWillowGFxMovieStateUsable,  UGFxMovieState   >(m, "UWillowGFxMovieStateUsable")
        .def_readwrite("UsabilityStates", &UWillowGFxMovieStateUsable::UsabilityStates)
        .def("StaticClass", &UWillowGFxMovieStateUsable::StaticClass, py::return_value_policy::reference)
          ;
}