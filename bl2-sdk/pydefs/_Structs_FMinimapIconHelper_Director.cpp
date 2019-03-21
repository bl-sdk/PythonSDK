#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMinimapIconHelper_Director()
{
    class_< FMinimapIconHelper_Director >("FMinimapIconHelper_Director", no_init)
        .def_readwrite("Director", &FMinimapIconHelper_Director::Director)
        .def_readonly("UnknownData00", &FMinimapIconHelper_Director::UnknownData00)
        .def_readwrite("Location", &FMinimapIconHelper_Director::Location)
        .def_readwrite("ActionableMissionDefinition", &FMinimapIconHelper_Director::ActionableMissionDefinition)
  ;
}