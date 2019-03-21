#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshObstacle()
{
    class_< UIGBXNavMeshObstacle, bases< UInterface >  , boost::noncopyable>("UIGBXNavMeshObstacle", no_init)
        .def("StaticClass", &UIGBXNavMeshObstacle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}