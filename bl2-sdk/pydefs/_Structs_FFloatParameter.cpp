#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFloatParameter()
{
    class_< FFloatParameter >("FFloatParameter", no_init)
        .def_readwrite("Name", &FFloatParameter::Name)
        .def_readwrite("Value", &FFloatParameter::Value)
  ;
}