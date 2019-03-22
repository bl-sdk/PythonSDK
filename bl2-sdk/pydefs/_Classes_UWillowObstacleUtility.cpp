#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowObstacleUtility(py::module &m)
{
    py::class_< UWillowObstacleUtility,  UObject   >(m, "UWillowObstacleUtility")
        .def_readwrite("GridSize", &UWillowObstacleUtility::GridSize)
        .def_readwrite("MaxTime", &UWillowObstacleUtility::MaxTime)
        .def_readwrite("MaxDist", &UWillowObstacleUtility::MaxDist)
        .def_readwrite("LastPointBonus", &UWillowObstacleUtility::LastPointBonus)
        .def_readwrite("Obstacles", &UWillowObstacleUtility::Obstacles)
        .def_readwrite("ObstaclePoints", &UWillowObstacleUtility::ObstaclePoints)
        .def("GetObstacleData", &UWillowObstacleUtility::GetObstacleData)
        .def("IsDebugObstacle", &UWillowObstacleUtility::IsDebugObstacle)
        .def("UnRegisterObstacle", &UWillowObstacleUtility::UnRegisterObstacle)
        .def("RegisterObstacle", &UWillowObstacleUtility::RegisterObstacle)
          ;
}