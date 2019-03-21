#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopOppSummary()
{
    class_< FPopOppSummary >("FPopOppSummary", no_init)
        .def_readwrite("Summary", &FPopOppSummary::Summary)
        .def_readwrite("Count", &FPopOppSummary::Count)
  ;
}