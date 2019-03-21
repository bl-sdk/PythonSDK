#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLoadingMovieExceptionInfo()
{
    class_< FLoadingMovieExceptionInfo >("FLoadingMovieExceptionInfo", no_init)
        .def_readwrite("PersistentMapName", &FLoadingMovieExceptionInfo::PersistentMapName)
        .def_readwrite("Tag", &FLoadingMovieExceptionInfo::Tag)
  ;
}