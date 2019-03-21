#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMBehavior()
{
    class_< FSMBehavior >("FSMBehavior", no_init)
        .def_readwrite("Behaviors", &FSMBehavior::Behaviors)
  ;
}