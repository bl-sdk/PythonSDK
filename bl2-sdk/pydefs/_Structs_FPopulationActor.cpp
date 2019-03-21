#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationActor()
{
    class_< FPopulationActor >("FPopulationActor", no_init)
        .def_readwrite("SpawnFactory", &FPopulationActor::SpawnFactory)
        .def_readwrite("Probability", &FPopulationActor::Probability)
        .def_readwrite("MaxActiveAtOneTime", &FPopulationActor::MaxActiveAtOneTime)
  ;
}