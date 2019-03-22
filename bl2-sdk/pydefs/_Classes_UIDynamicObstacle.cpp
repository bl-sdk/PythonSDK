#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDynamicObstacle(py::module &m)
{
    py::class_< UIDynamicObstacle,  UInterface   >(m, "UIDynamicObstacle")
        .def("GetObstacleInfo", &UIDynamicObstacle::GetObstacleInfo)
        .def("GetObstacleActor", &UIDynamicObstacle::GetObstacleActor, py::return_value_policy::reference)
        .def("GetMagnetData", &UIDynamicObstacle::GetMagnetData)
        .def("SetObstacleVelocity", &UIDynamicObstacle::SetObstacleVelocity)
        .def("CanAvoidObstacle", &UIDynamicObstacle::CanAvoidObstacle)
        .def("CanAvoidObstacles", &UIDynamicObstacle::CanAvoidObstacles)
        .def("SetObstacleActive", &UIDynamicObstacle::SetObstacleActive)
        .def("IsObstacleActive", &UIDynamicObstacle::IsObstacleActive)
          ;
}