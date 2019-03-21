#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavMeshPathConstraintCacheDatum(py::object m)
{
    py::class_< FNavMeshPathConstraintCacheDatum >(m, "FNavMeshPathConstraintCacheDatum")
        .def_readwrite("ListIdx", &FNavMeshPathConstraintCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathConstraintCacheDatum::List)
  ;
}