#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPawnClassEventData()
{
    class_< FPawnClassEventData >("FPawnClassEventData", no_init)
        .def_readwrite("PawnClassName", &FPawnClassEventData::PawnClassName)
  ;
}