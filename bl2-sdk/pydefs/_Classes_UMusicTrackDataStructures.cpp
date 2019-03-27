#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMusicTrackDataStructures(py::module &m)
{
    py::class_< UMusicTrackDataStructures,  UObject   >(m, "UMusicTrackDataStructures")
		.def_static("StaticClass", &UMusicTrackDataStructures::StaticClass, py::return_value_policy::reference)
          ;
}