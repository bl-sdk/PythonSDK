#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelSignGFxMovie(py::object m)
{
    py::class_< UFastTravelSignGFxMovie,  UGFxMovieInteractiveObject   >(m, "UFastTravelSignGFxMovie")
        .def("StaticClass", &UFastTravelSignGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("eventStart", &UFastTravelSignGFxMovie::eventStart)
          ;
}