#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieState()
{
    class_< UGFxMovieState, bases< UObject >  , boost::noncopyable>("UGFxMovieState", no_init)
        .def_readwrite("StateName", &UGFxMovieState::StateName)
        .def_readwrite("DefaultState", &UGFxMovieState::DefaultState)
        .def_readwrite("StateType", &UGFxMovieState::StateType)
        .def_readwrite("AllStates", &UGFxMovieState::AllStates)
        .def("StaticClass", &UGFxMovieState::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDebugString", &UGFxMovieState::GetDebugString)
        .def("ApplyMovieState", &UGFxMovieState::ApplyMovieState)
        .def("FindMovieState", &UGFxMovieState::FindMovieState)
        .def("TestState", &UGFxMovieState::TestState)
        .def("ToggleState", &UGFxMovieState::ToggleState)
        .def("EnableState", &UGFxMovieState::EnableState)
        .staticmethod("StaticClass")
  ;
}