#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTier()
{
    class_< FTier >("FTier", no_init)
        .def_readwrite("Skills", &FTier::Skills)
        .def_readwrite("PointsToUnlockNextTier", &FTier::PointsToUnlockNextTier)
  ;
}