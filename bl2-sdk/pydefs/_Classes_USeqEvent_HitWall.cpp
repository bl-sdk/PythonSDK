#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_HitWall(py::module &m)
{
    py::class_< USeqEvent_HitWall,  USequenceEvent   >(m, "USeqEvent_HitWall")
        .def("StaticClass", &USeqEvent_HitWall::StaticClass, py::return_value_policy::reference)
          ;
}