#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSMNotify()
{
    class_< FSMNotify, bases< FSMBehavior >  >("FSMNotify", no_init)
        .def_readwrite("Time", &FSMNotify::Time)
  ;
}