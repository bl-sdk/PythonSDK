#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlaylistPopulation()
{
    class_< FPlaylistPopulation >("FPlaylistPopulation", no_init)
        .def_readwrite("PlaylistId", &FPlaylistPopulation::PlaylistId)
        .def_readwrite("WorldwideTotal", &FPlaylistPopulation::WorldwideTotal)
        .def_readwrite("RegionTotal", &FPlaylistPopulation::RegionTotal)
  ;
}