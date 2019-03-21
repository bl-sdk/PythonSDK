#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieStateStruct()
{
    py::class_< FMovieStateStruct >("FMovieStateStruct")
        .def_readwrite("States", &FMovieStateStruct::States)
        .def_readwrite("Flags", &FMovieStateStruct::Flags)
  ;
}