#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMessageOfTheDay()
{
    class_< FMessageOfTheDay >("FMessageOfTheDay", no_init)
        .def_readwrite("Header", &FMessageOfTheDay::Header)
        .def_readwrite("Body", &FMessageOfTheDay::Body)
        .def_readwrite("DisplayTime", &FMessageOfTheDay::DisplayTime)
  ;
}