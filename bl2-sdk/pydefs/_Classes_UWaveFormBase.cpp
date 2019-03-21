#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWaveFormBase(py::object m)
{
    py::class_< UWaveFormBase,  UObject   >(m, "UWaveFormBase")
        .def_readwrite("TheWaveForm", &UWaveFormBase::TheWaveForm)
        .def("StaticClass", &UWaveFormBase::StaticClass, py::return_value_policy::reference)
          ;
}