#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVelocityObstacleStat()
{
    class_< FVelocityObstacleStat >("FVelocityObstacleStat", no_init)
        .def_readwrite("Position", &FVelocityObstacleStat::Position)
        .def_readwrite("Velocity", &FVelocityObstacleStat::Velocity)
        .def_readwrite("Radius", &FVelocityObstacleStat::Radius)
        .def_readwrite("Priority", &FVelocityObstacleStat::Priority)
  ;
}