#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_WithinTraversalDist(py::module &m)
{
    py::class_< UNavMeshPath_WithinTraversalDist,  UNavMeshPathConstraint   >(m, "UNavMeshPath_WithinTraversalDist")
		.def_static("StaticClass", &UNavMeshPath_WithinTraversalDist::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxTraversalDist", &UNavMeshPath_WithinTraversalDist::MaxTraversalDist)
        .def_readwrite("SoftStartPenalty", &UNavMeshPath_WithinTraversalDist::SoftStartPenalty)
        .def("Recycle", &UNavMeshPath_WithinTraversalDist::Recycle)
        .def("DontExceedMaxDist", &UNavMeshPath_WithinTraversalDist::DontExceedMaxDist)
          ;
}