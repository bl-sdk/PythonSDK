#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_EnforceTwoWayEdges(py::module &m)
{
    py::class_< UNavMeshPath_EnforceTwoWayEdges,  UNavMeshPathConstraint   >(m, "UNavMeshPath_EnforceTwoWayEdges")
        .def("EnforceTwoWayEdges", &UNavMeshPath_EnforceTwoWayEdges::EnforceTwoWayEdges)
          ;
}