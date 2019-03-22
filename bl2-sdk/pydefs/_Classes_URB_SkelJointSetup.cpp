#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_SkelJointSetup(py::module &m)
{
    py::class_< URB_SkelJointSetup,  URB_ConstraintSetup   >(m, "URB_SkelJointSetup")
          ;
}