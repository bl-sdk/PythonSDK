#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_SplitScreen(py::module &m)
{
    py::class_< UWillowSeqCond_SplitScreen,  USequenceCondition   >(m, "UWillowSeqCond_SplitScreen")
		.def_static("StaticClass", &UWillowSeqCond_SplitScreen::StaticClass, py::return_value_policy::reference)
          ;
}