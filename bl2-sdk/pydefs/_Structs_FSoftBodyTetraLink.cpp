#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoftBodyTetraLink()
{
    class_< FSoftBodyTetraLink >("FSoftBodyTetraLink", no_init)
        .def_readwrite("Index", &FSoftBodyTetraLink::Index)
        .def_readwrite("Bary", &FSoftBodyTetraLink::Bary)
  ;
}