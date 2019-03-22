#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEndOfGameGFxMovie(py::module &m)
{
    py::class_< UEndOfGameGFxMovie,  UWillowGFxMovie   >(m, "UEndOfGameGFxMovie")
        .def_readwrite("ConsoleEvent", &UEndOfGameGFxMovie::ConsoleEvent)
        .def("extCancel", &UEndOfGameGFxMovie::extCancel)
        .def("extConfirmRestart", &UEndOfGameGFxMovie::extConfirmRestart)
        .def("eventStart", &UEndOfGameGFxMovie::eventStart)
          ;
}