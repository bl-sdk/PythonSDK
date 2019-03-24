#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareBool(py::module &m)
{
    py::class_< USeqCond_CompareBool,  USequenceCondition   >(m, "USeqCond_CompareBool")
		.def_static("StaticClass", &USeqCond_CompareBool::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqCond_CompareBool::eventGetObjClassVersion)
          ;
}