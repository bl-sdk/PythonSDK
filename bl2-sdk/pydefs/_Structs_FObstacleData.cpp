#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObstacleData(py::module &m)
{
    py::class_< FObstacleData >(m, "FObstacleData")
        .def_readwrite("Actor", &FObstacleData::Actor)
        .def_readwrite("Leader", &FObstacleData::Leader)
        .def_readwrite("Radius", &FObstacleData::Radius)
        .def_readwrite("HalfHeight", &FObstacleData::HalfHeight)
        .def_readwrite("MaxSpeed", &FObstacleData::MaxSpeed)
        .def_readwrite("Location", &FObstacleData::Location)
        .def_readwrite("Velocity", &FObstacleData::Velocity)
        .def_readwrite("OldVelocity", &FObstacleData::OldVelocity)
        .def_readwrite("LastOffset", &FObstacleData::LastOffset)
        .def_readwrite("IDO", &FObstacleData::IDO)
  ;
}