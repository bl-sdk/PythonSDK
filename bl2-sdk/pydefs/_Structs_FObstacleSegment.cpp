#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObstacleSegment()
{
    class_< FObstacleSegment >("FObstacleSegment", no_init)
        .def_readwrite("P1", &FObstacleSegment::P1)
        .def_readwrite("P2", &FObstacleSegment::P2)
        .def_readwrite("Normal", &FObstacleSegment::Normal)
  ;
}