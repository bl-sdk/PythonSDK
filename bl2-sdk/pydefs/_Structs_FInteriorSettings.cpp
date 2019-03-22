#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteriorSettings(py::module &m)
{
    py::class_< FInteriorSettings >(m, "FInteriorSettings")
        .def_readwrite("ExteriorVolume", &FInteriorSettings::ExteriorVolume)
        .def_readwrite("ExteriorTime", &FInteriorSettings::ExteriorTime)
        .def_readwrite("ExteriorLPF", &FInteriorSettings::ExteriorLPF)
        .def_readwrite("ExteriorLPFTime", &FInteriorSettings::ExteriorLPFTime)
        .def_readwrite("InteriorVolume", &FInteriorSettings::InteriorVolume)
        .def_readwrite("InteriorTime", &FInteriorSettings::InteriorTime)
        .def_readwrite("InteriorLPF", &FInteriorSettings::InteriorLPF)
        .def_readwrite("InteriorLPFTime", &FInteriorSettings::InteriorLPFTime)
  ;
}