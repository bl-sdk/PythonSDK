#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowObstacleUtility()
{
    class_< UWillowObstacleUtility, bases< UObject >  , boost::noncopyable>("UWillowObstacleUtility", no_init)
        .def_readwrite("GridSize", &UWillowObstacleUtility::GridSize)
        .def_readwrite("MaxTime", &UWillowObstacleUtility::MaxTime)
        .def_readwrite("MaxDist", &UWillowObstacleUtility::MaxDist)
        .def_readwrite("LastPointBonus", &UWillowObstacleUtility::LastPointBonus)
        .def_readwrite("Obstacles", &UWillowObstacleUtility::Obstacles)
        .def_readwrite("ObstaclePoints", &UWillowObstacleUtility::ObstaclePoints)
        .def("StaticClass", &UWillowObstacleUtility::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetObstacleData", &UWillowObstacleUtility::GetObstacleData)
        .def("IsDebugObstacle", &UWillowObstacleUtility::IsDebugObstacle)
        .def("UnRegisterObstacle", &UWillowObstacleUtility::UnRegisterObstacle)
        .def("RegisterObstacle", &UWillowObstacleUtility::RegisterObstacle)
        .staticmethod("StaticClass")
  ;
}