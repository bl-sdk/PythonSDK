#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlaylistPopulation()
{
    py::class_< FPlaylistPopulation >("FPlaylistPopulation")
        .def_readwrite("PlaylistId", &FPlaylistPopulation::PlaylistId)
        .def_readwrite("WorldwideTotal", &FPlaylistPopulation::WorldwideTotal)
        .def_readwrite("RegionTotal", &FPlaylistPopulation::RegionTotal)
  ;
}