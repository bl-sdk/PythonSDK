#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DivideInt(py::module &m)
{
    py::class_< USeqAct_DivideInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_DivideInt")
        .def_readwrite("ValueA", &USeqAct_DivideInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_DivideInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_DivideInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_DivideInt::IntResult)
          ;
}