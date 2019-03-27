#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovie(py::module &m)
{
    py::class_< UCodecMovie,  UObject   >(m, "UCodecMovie")
		.def_static("StaticClass", &UCodecMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlaybackDuration", &UCodecMovie::PlaybackDuration)
          ;
}