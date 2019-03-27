#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavMeshPathConstraintCacheDatum(py::module &m)
{
    py::class_< FNavMeshPathConstraintCacheDatum >(m, "FNavMeshPathConstraintCacheDatum")
        .def_readwrite("ListIdx", &FNavMeshPathConstraintCacheDatum::ListIdx)
  ;
}