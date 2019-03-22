#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDestroyBehavior(py::module &m)
{
    py::class_< UIDestroyBehavior,  UInterface   >(m, "UIDestroyBehavior")
        .def("StaticClass", &UIDestroyBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Destroy", &UIDestroyBehavior::Behavior_Destroy)
          ;
}