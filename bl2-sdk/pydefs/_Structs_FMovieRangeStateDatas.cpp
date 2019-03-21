#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieRangeStateData()
{
    py::class_< FMovieRangeStateData,  FMovieStateData   >("FMovieRangeStateData")
        .def_readwrite("Distance", &FMovieRangeStateData::Distance)
  ;
}