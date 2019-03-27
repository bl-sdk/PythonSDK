#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulatedAIPawnMemento(py::module &m)
{
    py::class_< FPopulatedAIPawnMemento >(m, "FPopulatedAIPawnMemento")
        .def_readwrite("PawnWeapons", &FPopulatedAIPawnMemento::PawnWeapons)
        .def_readwrite("PawnItems", &FPopulatedAIPawnMemento::PawnItems)
  ;
}