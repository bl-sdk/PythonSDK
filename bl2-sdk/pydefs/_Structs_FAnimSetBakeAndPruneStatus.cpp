#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAnimSetBakeAndPruneStatus()
{
    py::class_< FAnimSetBakeAndPruneStatus >("FAnimSetBakeAndPruneStatus")
        .def_readwrite("AnimSetName", &FAnimSetBakeAndPruneStatus::AnimSetName)
  ;
}