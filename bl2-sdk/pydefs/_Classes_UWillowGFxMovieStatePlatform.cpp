#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStatePlatform(py::module &m)
{
    py::class_< UWillowGFxMovieStatePlatform,  UGFxMovieState   >(m, "UWillowGFxMovieStatePlatform")
        .def_readwrite("PlatformStates", &UWillowGFxMovieStatePlatform::PlatformStates)
          ;
}