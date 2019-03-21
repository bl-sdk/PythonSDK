#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrajectoryData(py::object m)
{
    py::class_< FTrajectoryData >(m, "FTrajectoryData")
        .def_readwrite("Speed", &FTrajectoryData::Speed)
        .def_readwrite("AnglePct", &FTrajectoryData::AnglePct)
        .def_readwrite("Angle", &FTrajectoryData::Angle)
        .def_readwrite("Error", &FTrajectoryData::Error)
        .def_readwrite("Offset", &FTrajectoryData::Offset)
        .def_readwrite("PredictDistMax", &FTrajectoryData::PredictDistMax)
  ;
}