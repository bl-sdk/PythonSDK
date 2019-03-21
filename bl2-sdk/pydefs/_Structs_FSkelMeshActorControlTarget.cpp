#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelMeshActorControlTarget()
{
    py::class_< FSkelMeshActorControlTarget >("FSkelMeshActorControlTarget")
        .def_readwrite("ControlName", &FSkelMeshActorControlTarget::ControlName)
        .def_readwrite("TargetActor", &FSkelMeshActorControlTarget::TargetActor)
  ;
}