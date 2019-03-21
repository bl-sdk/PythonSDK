#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieStatePlayerAware()
{
    class_< UGFxMovieStatePlayerAware, bases< UGFxMovieState >  , boost::noncopyable>("UGFxMovieStatePlayerAware", no_init)
        .def_readwrite("LookAtThreshold", &UGFxMovieStatePlayerAware::LookAtThreshold)
        .def_readwrite("LookStates", &UGFxMovieStatePlayerAware::LookStates)
        .def_readwrite("RangeStates", &UGFxMovieStatePlayerAware::RangeStates)
        .def("StaticClass", &UGFxMovieStatePlayerAware::StaticClass, return_value_policy< reference_existing_object >())
        .def("EnableState", &UGFxMovieStatePlayerAware::EnableState)
        .staticmethod("StaticClass")
  ;
}