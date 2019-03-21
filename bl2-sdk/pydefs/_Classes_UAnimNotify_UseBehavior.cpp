#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_UseBehavior()
{
    py::class_< UAnimNotify_UseBehavior,  UAnimNotify   >("UAnimNotify_UseBehavior")
        .def_readwrite("Behaviors", &UAnimNotify_UseBehavior::Behaviors)
        .def_readwrite("InstigatorContextForBehavior", &UAnimNotify_UseBehavior::InstigatorContextForBehavior)
        .def("StaticClass", &UAnimNotify_UseBehavior::StaticClass, py::return_value_policy::reference)
        .def("PreTestNotify", &UAnimNotify_UseBehavior::PreTestNotify)
        .staticmethod("StaticClass")
  ;
}