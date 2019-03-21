#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObstacle()
{
    py::class_< UInterface_NavMeshPathObstacle,  UInterface   >("UInterface_NavMeshPathObstacle")
        .def("StaticClass", &UInterface_NavMeshPathObstacle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}