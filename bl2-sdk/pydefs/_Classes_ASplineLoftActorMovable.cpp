#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASplineLoftActorMovable()
{
    py::class_< ASplineLoftActorMovable,  ASplineLoftActor   >("ASplineLoftActorMovable")
        .def("StaticClass", &ASplineLoftActorMovable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}