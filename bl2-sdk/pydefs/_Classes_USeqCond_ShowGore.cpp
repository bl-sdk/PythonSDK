#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_ShowGore(py::module &m)
{
    py::class_< USeqCond_ShowGore,  USequenceCondition   >(m, "USeqCond_ShowGore")
		.def_static("StaticClass", &USeqCond_ShowGore::StaticClass, py::return_value_policy::reference)
          ;
}