#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FObjectiveStatusData()
{
    class_< FObjectiveStatusData >("FObjectiveStatusData", no_init)
        .def_readwrite("Objectives", &FObjectiveStatusData::Objectives)
  ;
}