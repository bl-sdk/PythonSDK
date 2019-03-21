#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugDisplayProperty()
{
    class_< FDebugDisplayProperty >("FDebugDisplayProperty", no_init)
        .def_readwrite("Obj", &FDebugDisplayProperty::Obj)
        .def_readwrite("PropertyName", &FDebugDisplayProperty::PropertyName)
  ;
}