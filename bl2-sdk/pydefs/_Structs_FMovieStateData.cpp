#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMovieStateData()
{
    class_< FMovieStateData >("FMovieStateData", no_init)
        .def_readwrite("State", &FMovieStateData::State)
        .def_readwrite("Mode", &FMovieStateData::Mode)
        .def_readwrite("Context", &FMovieStateData::Context)
        .def_readwrite("ASArgs", &FMovieStateData::ASArgs)
  ;
}