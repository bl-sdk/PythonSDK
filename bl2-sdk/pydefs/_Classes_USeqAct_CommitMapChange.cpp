#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CommitMapChange(py::module &m)
{
    py::class_< USeqAct_CommitMapChange,  USequenceAction   >(m, "USeqAct_CommitMapChange")
		.def_static("StaticClass", &USeqAct_CommitMapChange::StaticClass, py::return_value_policy::reference)
          ;
}