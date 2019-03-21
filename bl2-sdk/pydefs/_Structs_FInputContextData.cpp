#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputContextData()
{
    class_< FInputContextData >("FInputContextData", no_init)
        .def_readwrite("ContextName", &FInputContextData::ContextName)
        .def_readwrite("Definition", &FInputContextData::Definition)
  ;
}