#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWaveFormBase()
{
    py::class_< UWaveFormBase,  UObject   >("UWaveFormBase")
        .def_readwrite("TheWaveForm", &UWaveFormBase::TheWaveForm)
        .def("StaticClass", &UWaveFormBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}