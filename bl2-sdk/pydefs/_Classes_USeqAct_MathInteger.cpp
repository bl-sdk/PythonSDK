#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathInteger(py::module &m)
{
    py::class_< USeqAct_MathInteger,  USeqAct_MathBase   >(m, "USeqAct_MathInteger")
        .def_readwrite("ValueA", &USeqAct_MathInteger::ValueA)
        .def_readwrite("ValueB", &USeqAct_MathInteger::ValueB)
        .def_readwrite("Result", &USeqAct_MathInteger::Result)
          ;
}