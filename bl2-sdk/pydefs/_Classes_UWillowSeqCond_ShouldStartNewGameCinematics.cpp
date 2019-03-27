#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_ShouldStartNewGameCinematics(py::module &m)
{
    py::class_< UWillowSeqCond_ShouldStartNewGameCinematics,  USequenceCondition   >(m, "UWillowSeqCond_ShouldStartNewGameCinematics")
		.def_static("StaticClass", &UWillowSeqCond_ShouldStartNewGameCinematics::StaticClass, py::return_value_policy::reference)
          ;
}