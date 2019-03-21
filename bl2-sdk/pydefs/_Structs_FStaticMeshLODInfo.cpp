#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStaticMeshLODInfo()
{
    py::class_< FStaticMeshLODInfo >("FStaticMeshLODInfo")
        .def_readwrite("Elements", &FStaticMeshLODInfo::Elements)
  ;
}