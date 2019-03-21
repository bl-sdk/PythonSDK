#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_EnforceTwoWayEdges(py::object m)
{
    py::class_< UNavMeshPath_EnforceTwoWayEdges,  UNavMeshPathConstraint   >(m, "UNavMeshPath_EnforceTwoWayEdges")
        .def("StaticClass", &UNavMeshPath_EnforceTwoWayEdges::StaticClass, py::return_value_policy::reference)
        .def("EnforceTwoWayEdges", &UNavMeshPath_EnforceTwoWayEdges::EnforceTwoWayEdges)
          ;
}