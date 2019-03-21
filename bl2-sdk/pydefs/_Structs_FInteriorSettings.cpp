#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInteriorSettings()
{
    class_< FInteriorSettings >("FInteriorSettings", no_init)
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