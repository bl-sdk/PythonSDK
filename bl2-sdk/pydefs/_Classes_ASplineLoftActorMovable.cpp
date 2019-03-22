#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASplineLoftActorMovable(py::module &m)
{
    py::class_< ASplineLoftActorMovable,  ASplineLoftActor   >(m, "ASplineLoftActorMovable")
        .def("StaticClass", &ASplineLoftActorMovable::StaticClass, py::return_value_policy::reference)
          ;
}