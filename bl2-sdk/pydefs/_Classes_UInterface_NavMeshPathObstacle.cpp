#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObstacle()
{
    class_< UInterface_NavMeshPathObstacle, bases< UInterface >  , boost::noncopyable>("UInterface_NavMeshPathObstacle", no_init)
        .def("StaticClass", &UInterface_NavMeshPathObstacle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}