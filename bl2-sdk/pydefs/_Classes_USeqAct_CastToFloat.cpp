#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CastToFloat(py::object m)
{
    py::class_< USeqAct_CastToFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_CastToFloat")
        .def_readwrite("Value", &USeqAct_CastToFloat::Value)
        .def_readwrite("FloatResult", &USeqAct_CastToFloat::FloatResult)
        .def("StaticClass", &USeqAct_CastToFloat::StaticClass, py::return_value_policy::reference)
          ;
}