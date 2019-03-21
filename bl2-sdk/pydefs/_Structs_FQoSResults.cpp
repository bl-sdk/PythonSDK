#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQoSResults()
{
    class_< FQoSResults >("FQoSResults", no_init)
        .def_readwrite("PingTimes", &FQoSResults::PingTimes)
        .def_readwrite("PingInMs", &FQoSResults::PingInMs)
  ;
}