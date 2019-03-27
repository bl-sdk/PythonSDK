#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLookAtActor(py::module &m)
{
    py::class_< UWillowSeqAct_SetLookAtActor,  USequenceAction   >(m, "UWillowSeqAct_SetLookAtActor")
		.def_static("StaticClass", &UWillowSeqAct_SetLookAtActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Offset", &UWillowSeqAct_SetLookAtActor::Offset)
          ;
}