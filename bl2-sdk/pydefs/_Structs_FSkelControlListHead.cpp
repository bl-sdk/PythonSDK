#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkelControlListHead()
{
    class_< FSkelControlListHead >("FSkelControlListHead", no_init)
        .def_readwrite("BoneName", &FSkelControlListHead::BoneName)
        .def_readwrite("ControlHead", &FSkelControlListHead::ControlHead)
  ;
}