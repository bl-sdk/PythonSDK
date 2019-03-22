#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathBase(py::module &m)
{
    py::class_< USeqAct_MathBase,  USequenceAction   >(m, "USeqAct_MathBase")
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
          ;
}