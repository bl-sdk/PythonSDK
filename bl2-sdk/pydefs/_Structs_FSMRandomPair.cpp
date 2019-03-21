#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMRandomPair()
{
    class_< FSMRandomPair >("FSMRandomPair", no_init)
        .def_readwrite("Weight", &FSMRandomPair::Weight)
        .def_readwrite("SMD", &FSMRandomPair::SMD)
  ;
}