#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieRangeStateData(py::object m)
{
    py::class_< FMovieRangeStateData,  FMovieStateData   >(m, "FMovieRangeStateData")
        .def_readwrite("Distance", &FMovieRangeStateData::Distance)
  ;
}