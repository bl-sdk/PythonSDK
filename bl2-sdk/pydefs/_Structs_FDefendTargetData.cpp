#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDefendTargetData()
{
    class_< FDefendTargetData >("FDefendTargetData", no_init)
        .def_readwrite("Objective", &FDefendTargetData::Objective)
        .def_readwrite("PercentHealth", &FDefendTargetData::PercentHealth)
  ;
}