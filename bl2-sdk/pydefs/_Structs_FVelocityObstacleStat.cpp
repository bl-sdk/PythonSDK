#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVelocityObstacleStat(py::module &m)
{
    py::class_< FVelocityObstacleStat >(m, "FVelocityObstacleStat")
        .def_readwrite("Position", &FVelocityObstacleStat::Position)
        .def_readwrite("Velocity", &FVelocityObstacleStat::Velocity)
        .def_readwrite("Radius", &FVelocityObstacleStat::Radius)
        .def_readwrite("Priority", &FVelocityObstacleStat::Priority)
  ;
}