#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurrentPlayerMet(py::module &m)
{
    py::class_< FCurrentPlayerMet >(m, "FCurrentPlayerMet")
        .def_readwrite("TeamNum", &FCurrentPlayerMet::TeamNum)
        .def_readwrite("Skill", &FCurrentPlayerMet::Skill)
        .def_readwrite("NetId", &FCurrentPlayerMet::NetId)
  ;
}