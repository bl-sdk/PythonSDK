#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerMember()
{
    py::class_< FPlayerMember >("FPlayerMember")
        .def_readwrite("TeamNum", &FPlayerMember::TeamNum)
        .def_readwrite("Skill", &FPlayerMember::Skill)
        .def_readwrite("NetId", &FPlayerMember::NetId)
  ;
}