#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCombatPointData()
{
    class_< FCombatPointData >("FCombatPointData", no_init)
        .def_readwrite("Slot", &FCombatPointData::Slot)
        .def_readwrite("Location", &FCombatPointData::Location)
        .def_readwrite("Actor", &FCombatPointData::Actor)
        .def_readwrite("ConstraintType", &FCombatPointData::ConstraintType)
        .def_readwrite("ConstraintTags", &FCombatPointData::ConstraintTags)
  ;
}