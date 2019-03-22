#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLoadInfo(py::module &m)
{
    py::class_< FLoadInfo >(m, "FLoadInfo")
        .def_readwrite("CharacterData", &FLoadInfo::CharacterData)
  ;
}