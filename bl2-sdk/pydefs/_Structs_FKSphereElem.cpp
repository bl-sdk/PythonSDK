#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKSphereElem()
{
    class_< FKSphereElem >("FKSphereElem", no_init)
        .def_readwrite("TM", &FKSphereElem::TM)
        .def_readwrite("Radius", &FKSphereElem::Radius)
  ;
}