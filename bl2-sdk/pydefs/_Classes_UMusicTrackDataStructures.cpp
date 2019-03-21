#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMusicTrackDataStructures()
{
    py::class_< UMusicTrackDataStructures,  UObject   >("UMusicTrackDataStructures")
        .def("StaticClass", &UMusicTrackDataStructures::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}