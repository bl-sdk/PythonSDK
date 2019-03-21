#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOpportunityStat()
{
    class_< FPopulationOpportunityStat >("FPopulationOpportunityStat", no_init)
        .def_readwrite("PercentNodeReduction", &FPopulationOpportunityStat::PercentNodeReduction)
  ;
}