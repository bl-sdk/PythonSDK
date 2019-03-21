#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_SkelJointSetup(py::object m)
{
    py::class_< URB_SkelJointSetup,  URB_ConstraintSetup   >(m, "URB_SkelJointSetup")
        .def("StaticClass", &URB_SkelJointSetup::StaticClass, py::return_value_policy::reference)
          ;
}