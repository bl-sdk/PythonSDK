#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSKURuntimeLibrarySet()
{
    class_< FSKURuntimeLibrarySet >("FSKURuntimeLibrarySet", no_init)
        .def_readwrite("Id", &FSKURuntimeLibrarySet::Id)
        .def_readonly("Libraries", &FSKURuntimeLibrarySet::Libraries)
  ;
}