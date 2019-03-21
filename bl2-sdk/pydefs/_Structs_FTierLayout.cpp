#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTierLayout()
{
    class_< FTierLayout >("FTierLayout", no_init)
        .def_readwrite("bCellIsOccupied", &FTierLayout::bCellIsOccupied)
  ;
}