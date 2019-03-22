#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieStateStruct(py::module &m)
{
    py::class_< FMovieStateStruct >(m, "FMovieStateStruct")
        .def_readwrite("States", &FMovieStateStruct::States)
        .def_readwrite("Flags", &FMovieStateStruct::Flags)
  ;
}