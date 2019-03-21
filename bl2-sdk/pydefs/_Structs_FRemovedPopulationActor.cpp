#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRemovedPopulationActor()
{
    class_< FRemovedPopulationActor >("FRemovedPopulationActor", no_init)
        .def_readwrite("CreationFlags", &FRemovedPopulationActor::CreationFlags)
        .def_readwrite("FactoryPath", &FRemovedPopulationActor::FactoryPath)
  ;
}