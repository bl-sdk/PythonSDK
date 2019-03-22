#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionSignGFxMovie(py::module &m)
{
    py::class_< ULevelTransitionSignGFxMovie,  UGFxMovieInteractiveObject   >(m, "ULevelTransitionSignGFxMovie")
        .def("StaticClass", &ULevelTransitionSignGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("eventStart", &ULevelTransitionSignGFxMovie::eventStart)
          ;
}