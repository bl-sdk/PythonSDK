#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TogglePostRenderFor(py::module &m)
{
    py::class_< UWillowSeqAct_TogglePostRenderFor,  USequenceAction   >(m, "UWillowSeqAct_TogglePostRenderFor")
		.def_static("StaticClass", &UWillowSeqAct_TogglePostRenderFor::StaticClass, py::return_value_policy::reference)
          ;
}