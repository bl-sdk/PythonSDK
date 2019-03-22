#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoadingMovieExceptionInfo(py::module &m)
{
    py::class_< FLoadingMovieExceptionInfo >(m, "FLoadingMovieExceptionInfo")
        .def_readwrite("PersistentMapName", &FLoadingMovieExceptionInfo::PersistentMapName)
        .def_readwrite("Tag", &FLoadingMovieExceptionInfo::Tag)
  ;
}