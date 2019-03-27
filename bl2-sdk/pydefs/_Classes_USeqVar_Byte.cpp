#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Byte(py::module &m)
{
    py::class_< USeqVar_Byte,  USequenceVariable   >(m, "USeqVar_Byte")
		.def_static("StaticClass", &USeqVar_Byte::StaticClass, py::return_value_policy::reference)
          ;
}