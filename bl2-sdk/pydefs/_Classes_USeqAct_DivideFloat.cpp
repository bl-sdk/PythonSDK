#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DivideFloat(py::module &m)
{
    py::class_< USeqAct_DivideFloat,  USeqAct_SetSequenceVariable   >(m, "USeqAct_DivideFloat")
        .def_readwrite("ValueA", &USeqAct_DivideFloat::ValueA)
        .def_readwrite("ValueB", &USeqAct_DivideFloat::ValueB)
        .def_readwrite("FloatResult", &USeqAct_DivideFloat::FloatResult)
        .def_readwrite("IntResult", &USeqAct_DivideFloat::IntResult)
          ;
}