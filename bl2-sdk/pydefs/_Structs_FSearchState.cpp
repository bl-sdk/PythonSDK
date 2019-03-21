#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSearchState()
{
    py::class_< FSearchState >("FSearchState")
        .def_readwrite("Subject", &FSearchState::Subject)
        .def_readonly("UnknownData00", &FSearchState::UnknownData00)
        .def_readwrite("Type", &FSearchState::Type)
        .def_readwrite("ListIndex", &FSearchState::ListIndex)
        .def_readwrite("CurrentList", &FSearchState::CurrentList)
  ;
}