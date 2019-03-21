#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemBehaviorSet()
{
    py::class_< FItemBehaviorSet >("FItemBehaviorSet")
        .def_readwrite("OnUsed", &FItemBehaviorSet::OnUsed)
  ;
}