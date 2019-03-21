#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIScaleBehavior()
{
    py::class_< UIScaleBehavior,  UInterface   >("UIScaleBehavior")
        .def("StaticClass", &UIScaleBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeScale", &UIScaleBehavior::Behavior_ChangeScale)
        .staticmethod("StaticClass")
  ;
}