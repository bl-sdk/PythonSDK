#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStaticMeshLODInfo(py::object m)
{
    py::class_< FStaticMeshLODInfo >(m, "FStaticMeshLODInfo")
        .def_readwrite("Elements", &FStaticMeshLODInfo::Elements)
  ;
}