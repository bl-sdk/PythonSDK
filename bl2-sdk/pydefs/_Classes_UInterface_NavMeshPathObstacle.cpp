#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObstacle(py::module &m)
{
    py::class_< UInterface_NavMeshPathObstacle,  UInterface   >(m, "UInterface_NavMeshPathObstacle")
          ;
}