#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CastToInt(py::module &m)
{
    py::class_< USeqAct_CastToInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_CastToInt")
        .def_readwrite("Value", &USeqAct_CastToInt::Value)
        .def_readwrite("IntResult", &USeqAct_CastToInt::IntResult)
        .def("StaticClass", &USeqAct_CastToInt::StaticClass, py::return_value_policy::reference)
          ;
}