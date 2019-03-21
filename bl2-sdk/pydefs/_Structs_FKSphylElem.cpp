#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKSphylElem()
{
    class_< FKSphylElem >("FKSphylElem", no_init)
        .def_readwrite("TM", &FKSphylElem::TM)
        .def_readwrite("Radius", &FKSphylElem::Radius)
        .def_readwrite("Length", &FKSphylElem::Length)
  ;
}