#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPCContextMenuItem()
{
    class_< FPCContextMenuItem >("FPCContextMenuItem", no_init)
        .def_readwrite("Caption", &FPCContextMenuItem::Caption)
        .def_readwrite("Action", &FPCContextMenuItem::Action)
  ;
}