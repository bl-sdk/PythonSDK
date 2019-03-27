#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSynchronizedActorVisibilityHistory(py::module &m)
{
    py::class_< FSynchronizedActorVisibilityHistory >(m, "FSynchronizedActorVisibilityHistory")
        .def_readwrite("State", &FSynchronizedActorVisibilityHistory::State)
        .def_readwrite("CriticalSection", &FSynchronizedActorVisibilityHistory::CriticalSection)
  ;
}