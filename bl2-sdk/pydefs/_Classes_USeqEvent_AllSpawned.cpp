#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_AllSpawned(py::module &m)
{
    py::class_< USeqEvent_AllSpawned,  USequenceEvent   >(m, "USeqEvent_AllSpawned")
        .def("StaticClass", &USeqEvent_AllSpawned::StaticClass, py::return_value_policy::reference)
          ;
}