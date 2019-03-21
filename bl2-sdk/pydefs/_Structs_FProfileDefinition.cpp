#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProfileDefinition()
{
    class_< FProfileDefinition >("FProfileDefinition", no_init)
        .def_readwrite("Profile", &FProfileDefinition::Profile)
        .def_readwrite("Definition", &FProfileDefinition::Definition)
  ;
}