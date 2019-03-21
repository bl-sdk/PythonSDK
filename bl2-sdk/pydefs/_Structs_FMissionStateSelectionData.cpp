#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionStateSelectionData()
{
    class_< FMissionStateSelectionData >("FMissionStateSelectionData", no_init)
  ;
}