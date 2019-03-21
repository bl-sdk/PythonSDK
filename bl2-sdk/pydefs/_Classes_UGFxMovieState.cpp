#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieState()
{
    py::class_< UGFxMovieState,  UObject   >("UGFxMovieState")
        .def_readwrite("StateName", &UGFxMovieState::StateName)
        .def_readwrite("DefaultState", &UGFxMovieState::DefaultState)
        .def_readwrite("StateType", &UGFxMovieState::StateType)
        .def_readwrite("AllStates", &UGFxMovieState::AllStates)
        .def("StaticClass", &UGFxMovieState::StaticClass, py::return_value_policy::reference)
        .def("GetDebugString", &UGFxMovieState::GetDebugString)
        .def("ApplyMovieState", &UGFxMovieState::ApplyMovieState)
        .def("FindMovieState", &UGFxMovieState::FindMovieState)
        .def("TestState", &UGFxMovieState::TestState)
        .def("ToggleState", &UGFxMovieState::ToggleState)
        .def("EnableState", &UGFxMovieState::EnableState)
        .staticmethod("StaticClass")
  ;
}