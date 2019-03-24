#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ConvertToString(py::module &m)
{
    py::class_< USeqAct_ConvertToString,  USequenceAction   >(m, "USeqAct_ConvertToString")
		.def_static("StaticClass", &USeqAct_ConvertToString::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VarSeparator", &USeqAct_ConvertToString::VarSeparator)
        .def_readwrite("NumberOfInputs", &USeqAct_ConvertToString::NumberOfInputs)
        .def("eventGetObjClassVersion", &USeqAct_ConvertToString::eventGetObjClassVersion)
          ;
}