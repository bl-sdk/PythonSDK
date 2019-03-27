#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AIAbortMoveToActor(py::module &m)
{
    py::class_< USeqAct_AIAbortMoveToActor,  USequenceAction   >(m, "USeqAct_AIAbortMoveToActor")
		.def_static("StaticClass", &USeqAct_AIAbortMoveToActor::StaticClass, py::return_value_policy::reference)
          ;
}