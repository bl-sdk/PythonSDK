#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_DistanceJointSetup(py::module &m)
{
    py::class_< URB_DistanceJointSetup,  URB_ConstraintSetup   >(m, "URB_DistanceJointSetup")
        .def("StaticClass", &URB_DistanceJointSetup::StaticClass, py::return_value_policy::reference)
          ;
}