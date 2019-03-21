#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_HingeSetup(py::object m)
{
    py::class_< URB_HingeSetup,  URB_ConstraintSetup   >(m, "URB_HingeSetup")
        .def("StaticClass", &URB_HingeSetup::StaticClass, py::return_value_policy::reference)
          ;
}