#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_RigidBodyCollision(py::module &m)
{
    py::class_< USeqEvent_RigidBodyCollision,  USequenceEvent   >(m, "USeqEvent_RigidBodyCollision")
        .def_readwrite("MinCollisionVelocity", &USeqEvent_RigidBodyCollision::MinCollisionVelocity)
          ;
}