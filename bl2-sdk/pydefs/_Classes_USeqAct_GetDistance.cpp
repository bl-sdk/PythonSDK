#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetDistance(py::module &m)
{
    py::class_< USeqAct_GetDistance,  USequenceAction   >(m, "USeqAct_GetDistance")
        .def_readwrite("Distance", &USeqAct_GetDistance::Distance)
        .def_readwrite("Method", &USeqAct_GetDistance::Method)
        .def("StaticClass", &USeqAct_GetDistance::StaticClass, py::return_value_policy::reference)
          ;
}