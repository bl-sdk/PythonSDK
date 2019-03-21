#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSavedRandomValue()
{
    class_< FSavedRandomValue >("FSavedRandomValue", no_init)
        .def_readwrite("ContextName", &FSavedRandomValue::ContextName)
        .def_readwrite("SavedValue", &FSavedRandomValue::SavedValue)
        .def_readwrite("ExpirationTime", &FSavedRandomValue::ExpirationTime)
  ;
}