#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSearchState()
{
    class_< FSearchState >("FSearchState", no_init)
        .def_readwrite("Subject", &FSearchState::Subject)
        .def_readonly("UnknownData00", &FSearchState::UnknownData00)
        .def_readwrite("Type", &FSearchState::Type)
        .def_readwrite("ListIndex", &FSearchState::ListIndex)
        .def_readwrite("CurrentList", &FSearchState::CurrentList)
  ;
}