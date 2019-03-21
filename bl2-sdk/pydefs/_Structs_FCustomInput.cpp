#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomInput()
{
    class_< FCustomInput >("FCustomInput", no_init)
        .def_readwrite("InputName", &FCustomInput::InputName)
        .def_readwrite("Input", &FCustomInput::Input)
  ;
}