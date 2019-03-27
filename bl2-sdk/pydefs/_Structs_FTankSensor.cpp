#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTankSensor(py::module &m)
{
    py::class_< FTankSensor >(m, "FTankSensor")
        .def_readwrite("Socket", &FTankSensor::Socket)
        .def_readwrite("Type", &FTankSensor::Type)
        .def_readwrite("SearchLength", &FTankSensor::SearchLength)
        .def_readwrite("HitLength", &FTankSensor::HitLength)
  ;
}