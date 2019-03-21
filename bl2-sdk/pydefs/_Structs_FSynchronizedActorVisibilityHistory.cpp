#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSynchronizedActorVisibilityHistory()
{
    py::class_< FSynchronizedActorVisibilityHistory >("FSynchronizedActorVisibilityHistory")
        .def_readwrite("State", &FSynchronizedActorVisibilityHistory::State)
        .def_readwrite("CriticalSection", &FSynchronizedActorVisibilityHistory::CriticalSection)
  ;
}