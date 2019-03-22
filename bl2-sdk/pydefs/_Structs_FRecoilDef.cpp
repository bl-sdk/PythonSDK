#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecoilDef(py::module &m)
{
    py::class_< FRecoilDef >(m, "FRecoilDef")
        .def_readwrite("TimeToGo", &FRecoilDef::TimeToGo)
        .def_readwrite("TimeDuration", &FRecoilDef::TimeDuration)
        .def_readwrite("RotAmplitude", &FRecoilDef::RotAmplitude)
        .def_readwrite("RotFrequency", &FRecoilDef::RotFrequency)
        .def_readwrite("RotSinOffset", &FRecoilDef::RotSinOffset)
        .def_readwrite("RotParams", &FRecoilDef::RotParams)
        .def_readwrite("RotOffset", &FRecoilDef::RotOffset)
        .def_readwrite("LocAmplitude", &FRecoilDef::LocAmplitude)
        .def_readwrite("LocFrequency", &FRecoilDef::LocFrequency)
        .def_readwrite("LocSinOffset", &FRecoilDef::LocSinOffset)
        .def_readwrite("LocParams", &FRecoilDef::LocParams)
        .def_readwrite("LocOffset", &FRecoilDef::LocOffset)
  ;
}