#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPlayerObserver()
{
    py::class_< UIPlayerObserver,  UInterface   >("UIPlayerObserver")
        .def("StaticClass", &UIPlayerObserver::StaticClass, py::return_value_policy::reference)
        .def("PlayerLeftGame", &UIPlayerObserver::PlayerLeftGame)
        .def("PlayerEnteredGame", &UIPlayerObserver::PlayerEnteredGame)
        .staticmethod("StaticClass")
  ;
}