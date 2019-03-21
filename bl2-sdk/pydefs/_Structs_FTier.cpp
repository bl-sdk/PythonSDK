#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTier()
{
    py::class_< FTier >("FTier")
        .def_readwrite("Skills", &FTier::Skills)
        .def_readwrite("PointsToUnlockNextTier", &FTier::PointsToUnlockNextTier)
  ;
}