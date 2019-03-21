#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameStatGroup()
{
    py::class_< FGameStatGroup >("FGameStatGroup")
        .def_readwrite("Group", &FGameStatGroup::Group)
        .def_readwrite("Level", &FGameStatGroup::Level)
  ;
}