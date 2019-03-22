#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieStatePlayerAware(py::module &m)
{
    py::class_< UGFxMovieStatePlayerAware,  UGFxMovieState   >(m, "UGFxMovieStatePlayerAware")
        .def_readwrite("LookAtThreshold", &UGFxMovieStatePlayerAware::LookAtThreshold)
        .def_readwrite("LookStates", &UGFxMovieStatePlayerAware::LookStates)
        .def_readwrite("RangeStates", &UGFxMovieStatePlayerAware::RangeStates)
        .def("StaticClass", &UGFxMovieStatePlayerAware::StaticClass, py::return_value_policy::reference)
        .def("EnableState", &UGFxMovieStatePlayerAware::EnableState)
          ;
}