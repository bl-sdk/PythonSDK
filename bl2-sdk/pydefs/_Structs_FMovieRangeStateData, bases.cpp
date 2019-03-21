#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMovieRangeStateData()
{
    class_< FMovieRangeStateData, bases< FMovieStateData >  >("FMovieRangeStateData", no_init)
        .def_readwrite("Distance", &FMovieRangeStateData::Distance)
  ;
}