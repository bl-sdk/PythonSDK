#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovieStatePlatform(py::module &m)
{
    py::class_< UWillowGFxMovieStatePlatform,  UGFxMovieState   >(m, "UWillowGFxMovieStatePlatform")
		.def_static("StaticClass", &UWillowGFxMovieStatePlatform::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlatformStates", &UWillowGFxMovieStatePlatform::PlatformStates)
          ;
}