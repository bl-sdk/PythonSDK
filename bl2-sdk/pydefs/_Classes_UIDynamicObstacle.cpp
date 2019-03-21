#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDynamicObstacle()
{
    class_< UIDynamicObstacle, bases< UInterface >  , boost::noncopyable>("UIDynamicObstacle", no_init)
        .def("StaticClass", &UIDynamicObstacle::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetObstacleInfo", &UIDynamicObstacle::GetObstacleInfo)
        .def("GetObstacleActor", &UIDynamicObstacle::GetObstacleActor, return_value_policy< reference_existing_object >())
        .def("GetMagnetData", &UIDynamicObstacle::GetMagnetData)
        .def("SetObstacleVelocity", &UIDynamicObstacle::SetObstacleVelocity)
        .def("CanAvoidObstacle", &UIDynamicObstacle::CanAvoidObstacle)
        .def("CanAvoidObstacles", &UIDynamicObstacle::CanAvoidObstacles)
        .def("SetObstacleActive", &UIDynamicObstacle::SetObstacleActive)
        .def("IsObstacleActive", &UIDynamicObstacle::IsObstacleActive)
        .staticmethod("StaticClass")
  ;
}