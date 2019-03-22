#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetInt(py::module &m)
{
    py::class_< USeqAct_SetInt,  USeqAct_SetSequenceVariable   >(m, "USeqAct_SetInt")
        .def_readwrite("Target", &USeqAct_SetInt::Target)
        .def_readwrite("Value", &USeqAct_SetInt::Value)
        .def("eventGetObjClassVersion", &USeqAct_SetInt::eventGetObjClassVersion)
          ;
}