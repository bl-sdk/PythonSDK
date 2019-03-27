#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_SkelJointSetup(py::module &m)
{
    py::class_< URB_SkelJointSetup,  URB_ConstraintSetup   >(m, "URB_SkelJointSetup")
		.def_static("StaticClass", &URB_SkelJointSetup::StaticClass, py::return_value_policy::reference)
          ;
}