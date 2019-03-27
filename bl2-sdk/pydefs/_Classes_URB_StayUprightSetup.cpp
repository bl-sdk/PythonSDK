#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_StayUprightSetup(py::module &m)
{
    py::class_< URB_StayUprightSetup,  URB_ConstraintSetup   >(m, "URB_StayUprightSetup")
		.def_static("StaticClass", &URB_StayUprightSetup::StaticClass, py::return_value_policy::reference)
          ;
}