#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMatInstScalarParam(py::module &m)
{
    py::class_< USeqAct_SetMatInstScalarParam,  USequenceAction   >(m, "USeqAct_SetMatInstScalarParam")
		.def_static("StaticClass", &USeqAct_SetMatInstScalarParam::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MatInst", &USeqAct_SetMatInstScalarParam::MatInst)
        .def_readwrite("ParamName", &USeqAct_SetMatInstScalarParam::ParamName)
        .def_readwrite("ScalarValue", &USeqAct_SetMatInstScalarParam::ScalarValue)
          ;
}