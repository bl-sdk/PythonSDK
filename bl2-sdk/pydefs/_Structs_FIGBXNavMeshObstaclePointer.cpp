#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIGBXNavMeshObstaclePointer()
{
    py::class_< FIGBXNavMeshObstaclePointer >("FIGBXNavMeshObstaclePointer")
        .def_readwrite("Dummy", &FIGBXNavMeshObstaclePointer::Dummy)
  ;
}