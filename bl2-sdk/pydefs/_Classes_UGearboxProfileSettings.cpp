#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxProfileSettings()
{
    py::class_< UGearboxProfileSettings,  UOnlineProfileSettings   >("UGearboxProfileSettings")
        .def("StaticClass", &UGearboxProfileSettings::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}