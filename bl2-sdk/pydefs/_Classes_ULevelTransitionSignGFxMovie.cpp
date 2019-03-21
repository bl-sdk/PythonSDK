#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionSignGFxMovie()
{
    py::class_< ULevelTransitionSignGFxMovie,  UGFxMovieInteractiveObject   >("ULevelTransitionSignGFxMovie")
        .def("StaticClass", &ULevelTransitionSignGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("eventStart", &ULevelTransitionSignGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}