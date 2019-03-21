#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHeadTrackingKey()
{
    class_< FHeadTrackingKey >("FHeadTrackingKey", no_init)
        .def_readwrite("Time", &FHeadTrackingKey::Time)
        .def_readwrite("Action", &FHeadTrackingKey::Action)
  ;
}