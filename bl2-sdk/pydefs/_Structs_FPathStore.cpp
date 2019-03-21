#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPathStore()
{
    class_< FPathStore >("FPathStore", no_init)
        .def_readwrite("EdgeList", &FPathStore::EdgeList)
        .def_readwrite("PathDistances", &FPathStore::PathDistances)
  ;
}