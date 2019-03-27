#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStateUsable(py::module &m)
{
    py::class_< UWillowGFxMovieStateUsable,  UGFxMovieState   >(m, "UWillowGFxMovieStateUsable")
		.def_static("StaticClass", &UWillowGFxMovieStateUsable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("UsabilityStates", &UWillowGFxMovieStateUsable::UsabilityStates)
          ;
}