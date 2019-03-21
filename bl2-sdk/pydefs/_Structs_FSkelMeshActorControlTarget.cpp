#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkelMeshActorControlTarget()
{
    class_< FSkelMeshActorControlTarget >("FSkelMeshActorControlTarget", no_init)
        .def_readwrite("ControlName", &FSkelMeshActorControlTarget::ControlName)
        .def_readwrite("TargetActor", &FSkelMeshActorControlTarget::TargetActor)
  ;
}