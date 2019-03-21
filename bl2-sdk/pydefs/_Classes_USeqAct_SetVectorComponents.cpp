#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetVectorComponents(py::object m)
{
    py::class_< USeqAct_SetVectorComponents,  USequenceAction   >(m, "USeqAct_SetVectorComponents")
        .def_readwrite("OutVector", &USeqAct_SetVectorComponents::OutVector)
        .def_readwrite("X", &USeqAct_SetVectorComponents::X)
        .def_readwrite("Y", &USeqAct_SetVectorComponents::Y)
        .def_readwrite("Z", &USeqAct_SetVectorComponents::Z)
        .def("StaticClass", &USeqAct_SetVectorComponents::StaticClass, py::return_value_policy::reference)
          ;
}