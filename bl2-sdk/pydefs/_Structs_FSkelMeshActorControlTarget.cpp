#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelMeshActorControlTarget(py::module &m)
{
    py::class_< FSkelMeshActorControlTarget >(m, "FSkelMeshActorControlTarget")
        .def_readwrite("ControlName", &FSkelMeshActorControlTarget::ControlName)
        .def_readwrite("TargetActor", &FSkelMeshActorControlTarget::TargetActor)
  ;
}