#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareObject(py::object m)
{
    py::class_< USeqCond_CompareObject,  USequenceCondition   >(m, "USeqCond_CompareObject")
        .def("StaticClass", &USeqCond_CompareObject::StaticClass, py::return_value_policy::reference)
          ;
}