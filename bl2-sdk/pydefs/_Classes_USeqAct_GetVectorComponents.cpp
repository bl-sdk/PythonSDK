#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetVectorComponents(py::object m)
{
    py::class_< USeqAct_GetVectorComponents,  USequenceAction   >(m, "USeqAct_GetVectorComponents")
        .def_readwrite("InVector", &USeqAct_GetVectorComponents::InVector)
        .def_readwrite("X", &USeqAct_GetVectorComponents::X)
        .def_readwrite("Y", &USeqAct_GetVectorComponents::Y)
        .def_readwrite("Z", &USeqAct_GetVectorComponents::Z)
        .def("StaticClass", &USeqAct_GetVectorComponents::StaticClass, py::return_value_policy::reference)
          ;
}