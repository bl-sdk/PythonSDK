#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStatePlatform()
{
    py::class_< UWillowGFxMovieStatePlatform,  UGFxMovieState   >("UWillowGFxMovieStatePlatform")
        .def_readwrite("PlatformStates", &UWillowGFxMovieStatePlatform::PlatformStates)
        .def("StaticClass", &UWillowGFxMovieStatePlatform::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}