#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieStateData(py::module &m)
{
    py::class_< FMovieStateData >(m, "FMovieStateData")
        .def_readwrite("State", &FMovieStateData::State)
        .def_readwrite("Mode", &FMovieStateData::Mode)
        .def_readwrite("Context", &FMovieStateData::Context)
        .def_readwrite("ASArgs", &FMovieStateData::ASArgs)
  ;
}