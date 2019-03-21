#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMovieStateStruct()
{
    class_< FMovieStateStruct >("FMovieStateStruct", no_init)
        .def_readwrite("States", &FMovieStateStruct::States)
        .def_readwrite("Flags", &FMovieStateStruct::Flags)
  ;
}