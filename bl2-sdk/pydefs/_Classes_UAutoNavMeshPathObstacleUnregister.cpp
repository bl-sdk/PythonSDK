#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAutoNavMeshPathObstacleUnregister()
{
    py::class_< UAutoNavMeshPathObstacleUnregister,  UObject   >("UAutoNavMeshPathObstacleUnregister")
        .def_readwrite("PathObstacleRef", &UAutoNavMeshPathObstacleUnregister::PathObstacleRef)
        .def_readonly("UnknownData00", &UAutoNavMeshPathObstacleUnregister::UnknownData00)
        .def("StaticClass", &UAutoNavMeshPathObstacleUnregister::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}