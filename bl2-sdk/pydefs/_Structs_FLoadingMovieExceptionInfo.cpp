#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoadingMovieExceptionInfo()
{
    py::class_< FLoadingMovieExceptionInfo >("FLoadingMovieExceptionInfo")
        .def_readwrite("PersistentMapName", &FLoadingMovieExceptionInfo::PersistentMapName)
        .def_readwrite("Tag", &FLoadingMovieExceptionInfo::Tag)
  ;
}