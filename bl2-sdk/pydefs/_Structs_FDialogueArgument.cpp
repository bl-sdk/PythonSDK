#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDialogueArgument()
{
    class_< FDialogueArgument >("FDialogueArgument", no_init)
        .def_readwrite("Source", &FDialogueArgument::Source)
  ;
}