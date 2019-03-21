#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionObjectiveStateSelectionData()
{
    class_< FMissionObjectiveStateSelectionData >("FMissionObjectiveStateSelectionData", no_init)
  ;
}