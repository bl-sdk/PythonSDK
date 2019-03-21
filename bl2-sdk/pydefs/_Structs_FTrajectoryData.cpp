#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrajectoryData()
{
    class_< FTrajectoryData >("FTrajectoryData", no_init)
        .def_readwrite("Speed", &FTrajectoryData::Speed)
        .def_readwrite("AnglePct", &FTrajectoryData::AnglePct)
        .def_readwrite("Angle", &FTrajectoryData::Angle)
        .def_readwrite("Error", &FTrajectoryData::Error)
        .def_readwrite("Offset", &FTrajectoryData::Offset)
        .def_readwrite("PredictDistMax", &FTrajectoryData::PredictDistMax)
  ;
}