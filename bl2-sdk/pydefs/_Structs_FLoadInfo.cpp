#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoadInfo()
{
    py::class_< FLoadInfo >("FLoadInfo")
        .def_readwrite("CharacterData", &FLoadInfo::CharacterData)
  ;
}