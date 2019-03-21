#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVelocityObstacle()
{
    class_< FVelocityObstacle >("FVelocityObstacle", no_init)
        .def_readonly("Segments", &FVelocityObstacle::Segments)
  ;
}