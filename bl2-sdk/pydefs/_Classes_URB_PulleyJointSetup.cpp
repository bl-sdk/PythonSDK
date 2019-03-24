#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_PulleyJointSetup(py::module &m)
{
    py::class_< URB_PulleyJointSetup,  URB_ConstraintSetup   >(m, "URB_PulleyJointSetup")
		.def_static("StaticClass", &URB_PulleyJointSetup::StaticClass, py::return_value_policy::reference)
          ;
}