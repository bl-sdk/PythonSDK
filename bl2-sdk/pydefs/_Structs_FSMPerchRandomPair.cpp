#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMPerchRandomPair()
{
    class_< FSMPerchRandomPair >("FSMPerchRandomPair", no_init)
        .def_readwrite("Weight", &FSMPerchRandomPair::Weight)
        .def_readwrite("SMD", &FSMPerchRandomPair::SMD)
  ;
}