#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStatePlatform(py::object m)
{
    py::class_< UWillowGFxMovieStatePlatform,  UGFxMovieState   >(m, "UWillowGFxMovieStatePlatform")
        .def_readwrite("PlatformStates", &UWillowGFxMovieStatePlatform::PlatformStates)
        .def("StaticClass", &UWillowGFxMovieStatePlatform::StaticClass, py::return_value_policy::reference)
          ;
}