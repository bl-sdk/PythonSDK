#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHUDInteractionIcon()
{
    class_< FHUDInteractionIcon >("FHUDInteractionIcon", no_init)
        .def_readonly("Icons", &FHUDInteractionIcon::Icons)
  ;
}