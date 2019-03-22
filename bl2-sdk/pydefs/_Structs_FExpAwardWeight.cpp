#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExpAwardWeight(py::module &m)
{
    py::class_< FExpAwardWeight >(m, "FExpAwardWeight")
        .def_readwrite("Players", &FExpAwardWeight::Players)
        .def_readwrite("KillerExpBonus", &FExpAwardWeight::KillerExpBonus)
        .def_readwrite("ExpWeight", &FExpAwardWeight::ExpWeight)
  ;
}