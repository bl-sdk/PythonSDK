#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSearchState(py::module &m)
{
    py::class_< FSearchState >(m, "FSearchState")
        .def_readwrite("Subject", &FSearchState::Subject)
        .def_readwrite("Type", &FSearchState::Type)
        .def_readwrite("ListIndex", &FSearchState::ListIndex)
        .def_readwrite("CurrentList", &FSearchState::CurrentList)
  ;
}