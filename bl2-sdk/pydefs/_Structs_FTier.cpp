#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTier(py::module &m)
{
	py::class_< FTier >(m, "FTier")
		.def_readwrite("Skills", &FTier::Skills, py::return_value_policy::reference)
		.def_readwrite("PointsToUnlockNextTier", &FTier::PointsToUnlockNextTier)
		;
}