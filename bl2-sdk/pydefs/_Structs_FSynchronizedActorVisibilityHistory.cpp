#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSynchronizedActorVisibilityHistory()
{
    class_< FSynchronizedActorVisibilityHistory >("FSynchronizedActorVisibilityHistory", no_init)
        .def_readwrite("State", &FSynchronizedActorVisibilityHistory::State)
        .def_readwrite("CriticalSection", &FSynchronizedActorVisibilityHistory::CriticalSection)
  ;
}