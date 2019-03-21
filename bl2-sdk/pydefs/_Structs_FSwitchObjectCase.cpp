#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSwitchObjectCase()
{
    class_< FSwitchObjectCase >("FSwitchObjectCase", no_init)
        .def_readwrite("ObjectValue", &FSwitchObjectCase::ObjectValue)
  ;
}