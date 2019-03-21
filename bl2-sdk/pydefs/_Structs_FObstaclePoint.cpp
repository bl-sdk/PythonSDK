#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObstaclePoint()
{
    class_< FObstaclePoint >("FObstaclePoint", no_init)
        .def_readwrite("Value", &FObstaclePoint::Value)
        .def_readwrite("Offset", &FObstaclePoint::Offset)
  ;
}