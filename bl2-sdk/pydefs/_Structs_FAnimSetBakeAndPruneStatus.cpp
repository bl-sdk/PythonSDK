#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAnimSetBakeAndPruneStatus()
{
    class_< FAnimSetBakeAndPruneStatus >("FAnimSetBakeAndPruneStatus", no_init)
        .def_readwrite("AnimSetName", &FAnimSetBakeAndPruneStatus::AnimSetName)
  ;
}