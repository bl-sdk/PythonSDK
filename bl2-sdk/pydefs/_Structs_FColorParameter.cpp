#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColorParameter()
{
    class_< FColorParameter >("FColorParameter", no_init)
        .def_readwrite("Name", &FColorParameter::Name)
        .def_readwrite("Value", &FColorParameter::Value)
  ;
}