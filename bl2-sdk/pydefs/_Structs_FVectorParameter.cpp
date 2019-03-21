#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorParameter()
{
    class_< FVectorParameter >("FVectorParameter", no_init)
        .def_readwrite("Name", &FVectorParameter::Name)
        .def_readwrite("Value", &FVectorParameter::Value)
  ;
}