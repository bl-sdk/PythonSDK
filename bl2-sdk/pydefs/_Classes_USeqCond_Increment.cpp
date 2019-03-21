#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_Increment()
{
    py::class_< USeqCond_Increment,  USequenceCondition   >("USeqCond_Increment")
        .def_readwrite("IncrementAmount", &USeqCond_Increment::IncrementAmount)
        .def_readwrite("ValueA", &USeqCond_Increment::ValueA)
        .def_readwrite("ValueB", &USeqCond_Increment::ValueB)
        .def("StaticClass", &USeqCond_Increment::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}