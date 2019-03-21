#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCombatPointDebugData()
{
    class_< FCombatPointDebugData >("FCombatPointDebugData", no_init)
        .def_readwrite("Score", &FCombatPointDebugData::Score)
        .def_readwrite("Location", &FCombatPointDebugData::Location)
  ;
}