#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputEntry()
{
    class_< FInputEntry >("FInputEntry", no_init)
        .def_readwrite("Type", &FInputEntry::Type)
        .def_readwrite("Value", &FInputEntry::Value)
        .def_readwrite("TimeDelta", &FInputEntry::TimeDelta)
        .def_readwrite("Action", &FInputEntry::Action)
  ;
}